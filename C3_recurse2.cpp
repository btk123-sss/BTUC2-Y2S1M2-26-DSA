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

int NoPath_grid_mn(int m, int n){
    if (n<=0 || m<=0) return 0;
    if (m==1 || n==1) return 1; 
    return NoPath_grid_mn(m-1,n) + NoPath_grid_mn(m, n-1);
}

void GenerateBinarySequence(int n, int ci, char bin_arr[]){
    if (n == ci){
        bin_arr[n] = '\0';    
        printf("%s \n", bin_arr);
        return;
    }
    bin_arr[ci] = '0';
    GenerateBinarySequence(n, ci+1, bin_arr);
    bin_arr[ci] = '1';
    GenerateBinarySequence(n, ci+1, bin_arr);
}

int main () {
    // int n = 30;
    // TowerOfHanoi_solution(n, 'A', 'C', 'B');

    // cout << NoPath_grid_mn(3,4) << endl;
    char arr[5];
    GenerateBinarySequence (4, 0, arr);

    return 0;
}