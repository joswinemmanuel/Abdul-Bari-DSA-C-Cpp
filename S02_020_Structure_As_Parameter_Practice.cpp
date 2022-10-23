#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void print_value(struct Rectangle r) {
    cout << "Length : " << r.length << ", Breadth : " << r.breadth << "\n";
}

void ch_length_area_pass_by_value(struct Rectangle r) {
    r.length = 100;
    r.breadth = 50;
    cout << "Area : " << r.length*r.breadth << "\n";
}

void ch_length_area_call_by_address(struct Rectangle *r) {
    r->length = 100;
    r->breadth = 50;
    cout << "Area : " << r->length*r->breadth << "\n";
}

void ch_length_area_call_by_reference(struct Rectangle &r) {
    r.length = 100;
    r.breadth = 50;
    cout << "Area : " << r.length*r.breadth << "\n";
}

struct Rectangle * return_structure(int length, int breadth) {
    struct Rectangle *r;
    r = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // or r = new Rectangle;
    r->length = length;
    r->breadth = breadth;
    return r;
}


int main() {
    struct Rectangle r1 = {10, 5};
    ch_length_area_pass_by_value(r1);
    // Area : 5000
    print_value(r1);
    // Length : 10, Breadth : 5
    // Value not changed while using pass by value

    r1.length = 10; r1.breadth = 5;
    ch_length_area_call_by_address(&r1);
    // Area : 5000
    print_value(r1);
    // Length : 100, Breadth : 50
    // Value is changes while using call by address

    r1.length = 10; r1.breadth = 5;
    ch_length_area_call_by_reference(r1);
    // Area : 5000
    print_value(r1);
    // Length : 100, Breadth : 50
    // Value is changed while using call by reference

    struct Rectangle *ptr;
    ptr = return_structure(1000, 500);
    cout << "Lenght : " << ptr->length << ", Breadth : " << ptr->breadth;
    // Lenght : 1000, Breadth : 500
}
