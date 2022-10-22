// This typically means all code in one massive codebase 

#include <stdio.h>

int main() {
    int length=0, breadth=0;

    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth : ");
    scanf("%d", &breadth);

    int area = length*breadth;
    int perimeter = 2*(length+breadth);

    printf("Area : %d\n", area);
    printf("Perimeter : %d\n", perimeter);
}

/*
Enter the length : 10
Enter the breadth : 5
Area : 50
Perimeter : 30
*/