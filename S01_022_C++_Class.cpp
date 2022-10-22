#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    int area() {
        return length*breadth;
    }

    void change_length(int length) {
        this->length = length;
    }
};

int main() {
    Rectangle r(10, 5);
    cout << "Area : " << r.area() << "\n";
    // Area : 50
    r.change_length(75);
    cout << "Area : " << r.area() << "\n";
    // Area : 375
}