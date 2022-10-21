#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[5];  // Array declaration
    
    A[0] = 10; // Adding value to array using index position
    A[1] = 20;
    A[2] = 30;

    for(int i=0; i<sizeof(A)/sizeof(int); i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
    // 10 20 30 22074 1019550944 
    // garbage value was there in array index that was not initialized

    int B[5] = {10, 20, 30};
    for(int i=0; i<sizeof(B)/sizeof(int); i++) {
        cout << B[i] << " ";
    }
    cout << "\n";
    // 10 20 30 0 0 
    // index whose value was not given is filled with 0

    int C[] = {1, 2, 3, 4, 5};
    for(int i=0; i<sizeof(C)/sizeof(int); i++) {
        cout << C[i] << " ";
    }
    cout << "\n";
    // 1 2 3 4 5

    for(int x : C) {
        cout << x << " ";
    }
    cout << "\n";
    // 1 2 3 4 5 
    // for each loop can be used
}