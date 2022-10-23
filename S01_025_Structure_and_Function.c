#include <stdio.h>

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

int perimeter(struct Rectangle r) {
    return 2*(r.length+r.breadth);
}

int main() {
    struct Rectangle r;
    int length, breadth;
    
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth : ");
    scanf("%d", &breadth);

    initialize(&r, length, breadth);

    printf("Area : %d\n", area(r));
    printf("Perimeter : %d\n", perimeter(r));
}

/*
Enter the length : 10
Enter the breadth : 5
Area : 50
Perimeter : 30
*/