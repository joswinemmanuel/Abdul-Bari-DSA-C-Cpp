#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        Rectangle(int length, int breadth);
        int area();
        int perimeter();
        int getLength() {return length;}
        void setLength(int length) {this->length = length;}
};

Rectangle::Rectangle() {
    length = breadth = 0;
}

Rectangle::Rectangle(int length, int breadth) {
    this->length = length;
    this->breadth = breadth;
}

int Rectangle::area() {
    return length*breadth;
}

int Rectangle::perimeter() {
    return 2*(length+breadth);
}

int main() {
    Rectangle r1(10, 20), r2;
    cout << "r1 : Area=" << r1.area() << ", Perimeter=" << r1.perimeter() << "\n";
    cout << "r2 : Area=" << r2.area() << ", Perimeter=" << r2.perimeter() << "\n";

    cout << "r1, r2 length : " <<r1.getLength() << " " << r2.getLength() << "\n";
    r2.setLength(10); 
    cout << "r1, r2 length : " <<r1.getLength() << " " << r2.getLength() << "\n";
}

/*
r1 : Area=200, Perimeter=60
r2 : Area=0, Perimeter=0
r1, r2 length : 10 0
r1, r2 length : 10 10
*/