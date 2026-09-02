
#include <iostream>
using namespace std;
#include <map>

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


// print one line
void printLine(const string& s){
    cout << s << endl;
}

// Print n lines using loop
void printNtime(int n, const string& s){
    for (int i=0; i< n; i++){
        printLine(s);
    }
}
// Print n lines using Recursion 
void RecursionPrintNtime(int n, const string& s){
    cout << s << endl;
    if(n==1){
        return;
    }
    RecursionPrintNtime(n-1, s);
}

// Linear Recursion :  runtime = O(n)
int LinearSum(int* A, int n){
    if (n==1) return A[0];
    else 
        return LinearSum(A, n-1) + A[n-1];
}

// Binary Recursion  :  runtime = O(n) 
int BinarySum(int* A, int i, int n){
    if (n == 1)
        return A[i];
    else {
        int j, k;
        if(n%2==0) j = n/2;
        else j = 1 + n/2;
        k = n/2;
        return BinarySum(A, i, j) + BinarySum(A, i+j, k);
    }
}

// Fibonacci serie using Recursion
int Fib(int n){
    if (n <= 1) return n;
    else return Fib(n-1) + Fib(n-2);
}



// Fibonacci serie using Recursion and Memorization  -> runtime O(n)
map<int, long long> m;
long long Fib2(int n)
{
    if (n <= 1)
        return n;
    if(n <= m.size()) return m[n];
    else{
        m[n] = Fib2(n - 1) + Fib2(n - 2);
        return m[n];
    }    
}

int main () {
    // printNtime(5, "Hello");
    // RecursionPrintNtime(6, "World!");
    // cout << f2(5) << endl;

    // int A[] = {7, 5, 4, 3, 1};
    // int s1 = LinearSum(A, 5);

    // int s2 = BinarySum(A, 0, 5);

    // cout << s1 << endl;
    // cout << s2 << endl;
    m[0] = 0;
    m[1] = 1;

    int N = 50;
    //cout << Fib(N) << endl;
    cout << Fib2(N) << endl;

    return 0;
}
