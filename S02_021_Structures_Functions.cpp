#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int length, int breadth) {
    r->length = length;
    r->breadth = breadth;
}

int area(struct Rectangle r) {
    return r.length*r.breadth;
}

void change_length(struct Rectangle *r, int length) {
    r->length = length;
}

int main() {
    struct Rectangle r;
    initialize(&r, 100, 50);
    cout << "Area : " << area(r) << "\n";
    // Area : 5000
    change_length(&r, 75);
    cout << "Area : " << area(r) << "\n";
    // Area : 3750
}
