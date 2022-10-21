#include <bits/stdc++.h>
using namespace std;

struct Rectangle {       // Defining a structure
    int length;
    int breadth;
} r1;         // Declaring a structure r1 along with defining the structure

int main() {
    struct Rectangle r2;  // Declaring a Rectangle structure r2
    r2.length = 10;       // giving values to structure variables of r2
    r2.breadth = 5;
    cout << "Length : " << r2.length;
    cout << "\nBreadth : " << r2.breadth;
    // Length : 10
    // Breadth : 5 
    cout << "\n";

    struct Rectangle r3 = {100, 50}; // Declaration along with initialization
    cout << "Length : " << r3.length;
    cout << "\nBreadth : " << r3.breadth;
    // Length : 100
    // Breadth : 50
    cout << "\n";

    cout << "Size of r1, r2, r3 : " << sizeof(r1) << " " << sizeof(r2) << " " << sizeof(r3) << "\n";
    // Size of r1, r2, r3 : 8 8 8
    // Size of a structure is the sum of size of each members, here 4 + 4 = 8
    
}