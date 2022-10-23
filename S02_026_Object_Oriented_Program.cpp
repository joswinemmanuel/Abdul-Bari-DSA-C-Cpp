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

    int perimeter() {
        return 2*(length+breadth);
    }
};

int main() {
    int length, breadth;
    
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth : ");
    scanf("%d", &breadth);

    Rectangle r(length, breadth);

    printf("Area : %d\n", r.area());
    printf("Perimeter : %d\n", r.perimeter());
}

/*
Enter the length : 10
Enter the breadth : 5
Area : 50
Perimeter : 30
*/
