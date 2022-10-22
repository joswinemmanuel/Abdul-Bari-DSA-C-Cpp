#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) { // instead of arr[], we can use *arr
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void arr_increment_by10(int arr[], int n) {
    for(int i=0; i<n; i++) {
        arr[i] += 10;
    }
}

int * return_array(int n) {
    int *p;
    p = (int *)malloc(5*sizeof(int));
    // p = new int[5];
    for(int i=0; i<n; i++) {
        p[i] = i+1; 
    }
    return p;
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    arr_increment_by10(A, 5);

    print_arr(A, 5);   
    // 20 30 40 50 60  

    int *ptr;
    ptr = return_array(10);
    print_arr(ptr, 10);
    // 1 2 3 4 5 6 7 8 9 10 
}