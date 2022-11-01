#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];      // without using pointer or heap memory, just a normal array
    int size;
    int length;
};


void display(struct Array arr) {
    printf("Elements are : ");
    for(int i=0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}
int main() {
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};

    display(arr);
}   

// Elements are : 10 20 30 40 50 