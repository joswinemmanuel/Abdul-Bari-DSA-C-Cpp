#include <bits/stdc++.h>
using namespace std;

// Pass by value
void pass_by_value_swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Call by address
void call_by_address_swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Call by reference
void call_by_reference_swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int A=10, B=20;
    cout << "Pass by value\n";
    cout << "Before swap : A = " << A << ", B = " << B << "\n";
    pass_by_value_swap(A, B);
    cout << "After swap  : A = " << A << ", B = " << B << "\n\n"; 

    A=10;
    B=20;
    cout << "Call by address\n";
    cout << "Before swap : A = " << A << ", B = " << B << "\n";
    call_by_address_swap(&A, &B);
    cout << "After swap  : A = " << A << ", B = " << B << "\n\n"; 

    A=10;
    B=20;
    cout << "Call by reference\n";
    cout << "Before swap : A = " << A << ", B = " << B << "\n";
    call_by_reference_swap(A, B);
    cout << "After swap  : A = " << A << ", B = " << B << "\n\n"; 
}

/*
Pass by value
Before swap : A = 10, B = 20
After swap  : A = 10, B = 20

Call by address
Before swap : A = 10, B = 20
After swap  : A = 20, B = 10

Call by reference
Before swap : A = 10, B = 20
After swap  : A = 20, B = 10
*/
