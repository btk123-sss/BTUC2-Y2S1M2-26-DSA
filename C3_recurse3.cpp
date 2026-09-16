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

int main()
{
    vector<char> K = {'1', '2', '3'};
    int n = 3;
    string word;

    print_all_strings(n, K, word);

    return 0;
}