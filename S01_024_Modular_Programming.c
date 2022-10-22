// Modular programming (also referred to as procedural programming) is a 
// general programming concept. It involves separating a program's functions into independet
// building blocks, each containing all the parts needed to execute a single 
// aspect of the functionality.

#include <stdio.h>

int Area(int length, int breadth) {
    return length*breadth;
}

int Perimeter(int length, int breadth) {
    return 2*(length+breadth);
}

int main() {
    int length=0, breadth=0;

    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth : ");
    scanf("%d", &breadth);

    int area = Area(length, breadth);
    int perimeter = Perimeter(length, breadth);

    printf("Area : %d\n", area);
    printf("Perimeter : %d\n", perimeter);
}

/*
Enter the length : 10
Enter the breadth : 5
Area : 50
Perimeter : 30
*/