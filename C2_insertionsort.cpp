#include <iostream>

using namespace std;

// sort an array of n characters
void insertionSort(char *A, int n)  {
    
    // insertion loop
    for (int i = 1; i < n; i++) {                    
        char cur = A[i]; // current character to insert
        int j = i - 1;   // start at previous character

        // while A[j] is out of order
        while ((j >= 0) && (A[j] > cur)) {                    
            A[j + 1] = A[j]; // move A[j] right
            j--;             // decrement j
        }
        A[j + 1] = cur; // this is the proper place for cur
    }
}
///  ?? complexity ->  O(n^2)

//     [9 , 7 , 6 , 5, 4 , 2]
// {
//         while ((j >= 0)) {                    
//             j--;          /// run j times   (j = 0 ->  n-1 )     
//         }

// }
//   f(n) =  0+ 1 + 2 + .. + n-1  = (n-1)(n-2)/2  = (1/2) n^2 + ...



int main() {
    const int studentnumber = 5;
    char grades[studentnumber] = {'C', 'D', 'A', 'E', 'E'} ;

    cout << "Before sorting : " << endl;
    for (int i = 0; i < studentnumber; i++){
        cout << grades[i] << " ";
    }
    cout << "\n\n";


    insertionSort(grades, studentnumber);

    cout << "After sorting : " << endl;
    for (int i = 0; i < studentnumber; i++){
        cout << grades[i] << " ";
    }
    cout << endl;

    return 0;
}

