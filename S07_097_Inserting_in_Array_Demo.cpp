#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];      
    int size;
    int length;
};

void append(struct Array *arr, int x) {
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x) {
    if(index >= 0 && index <= arr->length) {
        for(int i=arr->length; i>index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}

void display(struct Array arr) {
    printf("Elements are : ");
    for(int i=0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int main() {
    struct Array arr = {{10, 20, 30, 40, 50}, 20, 5};

    display(arr);
    append(&arr, 60);
    display(arr);

    insert(&arr, 1, 15);
    display(arr);
}  

/*
Elements are : 10 20 30 40 50 
Elements are : 10 20 30 40 50 60 
Elements are : 10 15 20 30 40 50 60 
*/