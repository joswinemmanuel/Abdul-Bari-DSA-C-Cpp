#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int &r = a; // now r is reference or alias of a
    cout << "a = " << a << " " << "r = " << r << "\n";
    // a = 10 r = 10
    // both have same value, as both are refering to same object

    a++;
    cout << "a = " << a << " " << "r = " << r << "\n";
    // a = 11 r = 11
    // incrementing a increments the value of r

    r++;
    cout << "a = " << a << " " << "r = " << r << "\n";
    // a = 12 r = 12
    // incrementing a increments the value of r

    int b = 99;
    r = b;
    cout << "a = " << a << " " << "r = " << r << "\n";
    // a = 99 r = 99
    // changing the value of r changes the value of a and vice versa
}