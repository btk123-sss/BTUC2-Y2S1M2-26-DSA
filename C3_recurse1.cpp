
#include <iostream>
using namespace std;

// Factorial function using Loop (iteration)
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
int f2(int n){
    if (n == 0) return 1;
    else return n*f2(n-1);
}

int main () {





    return 0;
}
