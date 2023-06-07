#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
 
int main() {
    int a = 10;

    int *p;   // Declaring a pointer
    p = &a;  // Initializing the pointer with address of a
    cout << *p << "\n"; // Dereferencing the pointer to get back the data in the address
    // 10

    int *q = &a; // Declaring and Initializing the pointer at the same time
    cout << *q << "\n";
    // 10

    cout << "Data in a : " << a << "\n";
    cout << "Address of a : " << &a << "\n";
    cout << "Data in p : " << p << "\n";    // data in p is the address of a
    cout << "Address in p : " << &p << "\n"; // p also have it's own address
    cout << "Dereferencing p : " << *p << "\n"; // dereferencing p gives data in a
    // Data in a : 10
    // Address of a : 0x7ffec4199f44
    // Data in p : 0x7ffec4199f44
    // Address in p : 0x7ffec4199f48
    // Dereferencing p : 10

    // Pointer to an array
    int  A[5] = {10, 20, 30, 40, 50};
    int *p_array = A;  // don't need & for giving array address to pointer
    // or do int *p_array = &A[0];
    for(int i=0; i<5; i++) {
        cout << p_array[i] << " ";
        // 10 20 30 40 50 
        // or do cout << *(p_array+i) << " "; for the same
    }
    cout << "\n";

    // Array in heap - C
    int *ap;
    ap = (int *)malloc(5*sizeof(int));
    ap[0]=1; ap[1]=2; ap[2]=3; ap[3]=4; ap[4]=5;
    for(int i=0; i<5; i++) {
        cout << ap[i] << " ";
    }
    // 1 2 3 4 5
    cout << "\n";
    free(ap);    // deallocating from heap memory - in C

    // Array in heap - C++
    int *app;
    app = new int[5];
    app[0]=1; app[1]=2; app[2]=3; app[3]=4; app[4]=5;
    for(int i=0; i<5; i++) {
        cout << app[i] << " ";
    }
    // 1 2 3 4 5
    delete []app;  // deallocating from heap memory - in C++
    cout << "\n";

    int *p1;
    char *p2;
    float *p3;
    double *p4;

    cout << sizeof(p1) << " " << sizeof(p2) << " " << sizeof(p3) << " " << sizeof(p4);
    // 8 8 8 8
    // size of pointer of any type is 8

}
