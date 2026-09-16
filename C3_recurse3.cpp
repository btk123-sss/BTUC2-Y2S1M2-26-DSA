#include <iostream>
#include <vector>
using namespace std;

void print_all_strings(int n, const vector<char> char_set, string& word){
    // base case 
    if (word.length() == n){
        cout << word << "\n";

        int number = stoi(word);
        cout << number << "\n"; 
        return;
    }
    // recursion with backtracking
    for (int i = 0; i < char_set.size(); i++){
        word.push_back(char_set[i]);
        print_all_strings(n, char_set, word);
        word.pop_back();
    }
}

void print_all_strings_nonrepeat(int n, const vector<char> char_set, 
    string &word, vector<bool>& used)  {
    // base case
    if (word.length() == n)
    {
        cout << word << "\n";
        return;
    }
    // recursion with backtracking
    for (int i = 0; i < char_set.size(); i++)
    {
        if(used[i] == false){
            used[i] = true;
            word.push_back(char_set[i]);
            print_all_strings_nonrepeat(n, char_set, word, used);
            word.pop_back();
            used[i] = false;
        }
    }
}




int main()
{
    vector<char> K = {'1', '2', '3'};
    int n = 3;
    string word;
    vector<bool> used(K.size(), false);

    // print_all_strings(n, K, word);
    print_all_strings_nonrepeat(n, K, word, used);

    return 0;
}