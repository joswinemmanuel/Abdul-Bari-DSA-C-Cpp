#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

void add_elements(struct Array &arr) {
    int n;
    printf("Enter the number of elements to be added : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
}

void display(struct Array arr) {
    printf("Elements are : ");
    for(int i=0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}
int main() {
    struct Array arr;

    printf("Enter the size of the array : ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    arr.length = 0;

    add_elements(arr);

    display(arr);
}   

/*
Enter the size of the array : 10
Enter the number of elements to be added : 5
Enter 5 elements : 1 10 20 30 100
Elements are : 1 10 20 30 100 
*/