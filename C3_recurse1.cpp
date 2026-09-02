
#include <iostream>
using namespace std;

// Factorial function using Loop (iteration)
// n! =  n*(n-1)*(n-2)* .. *1

int f1(int n){
    if (n <= 0) return 1;
    else{
        int r = 1;
        for(int i=1; i <= n; i++){
            r = r*i;
        }
        return r;
    }
}

// Factorial function using recursion
// n! =  n*(n-1)!
int f2(int n){
    if (n == 0) return 1;
    else return n*f2(n-1);
}

void printLine(const string& s){
    cout << s << endl;
}

void printNtime(int n, const string& s){
    for (int i=0; i< n; i++){
        printLine(s);
    }
}

void RecursionPrintNtime(int n, const string& s){
    cout << s << endl;
    if(n==1){
        return;
    }
    RecursionPrintNtime(n-1, s);
}

int main () {

    printNtime(5, "Hello");
    RecursionPrintNtime(6, "World!");

    cout << f2(5) << endl;



    return 0;
}
