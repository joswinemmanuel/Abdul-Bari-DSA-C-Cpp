#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r1 = {10, 5};
    struct Rectangle *p = &r1;
    (*p).length = 100;
    p->breadth = 50;
    cout << "Length : " << " " << p->length << " " << "Breadth : " << p->breadth << "\n";
    // Length :  100 Breadth : 50

    // OR 
    
    // In C
    struct Rectangle *r2;
    r2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    r2->length = 20;
    r2->breadth = 15;
    cout << "Length : " << " " << r2->length << " " << "Breadth : " << r2->breadth << "\n";
    // Length :  20 Breadth : 15

    // In C++
    struct Rectangle *r3;
    r3 = new Rectangle;
    r3->length = 220;
    r3->breadth = 115;
    cout << "Length : " << " " << r3->length << " " << "Breadth : " << r3->breadth << "\n";
    // Length :  220 Breadth : 115
}