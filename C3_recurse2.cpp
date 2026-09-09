#include <iostream>
using namespace std;

void TowerOfHanoi_solution(int n, char A, char C, char B){
    if (n==1) { 
        cout << "Move top disk from " << A << " to " << C << "\n";
        return; 
    }
    TowerOfHanoi_solution(n-1, A, B, C);
    cout << "Move top disk from " << A << " to " << C << "\n";
    TowerOfHanoi_solution(n-1, B, C, A);
}   // Runtime = O(2^n)

int main () {
    int n = 30;
    TowerOfHanoi_solution(n, 'A', 'C', 'B');
    

    return 0;
}