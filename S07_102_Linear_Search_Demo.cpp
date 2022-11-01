#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];      
    int size;
    int length;
};

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int linear_search(struct Array arr, int key) {
    for(int i=0; i<arr.length; i++) {
        if(arr.A[i] == key)
            return i;
    }
    return -1;
}

int transposition_linear_search(struct Array *arr, int key) {
    for(int i=0; i<arr->length; i++) {
        if(arr->A[i] == key) {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int move_to_front_linear_search(struct Array *arr, int key) {
    for(int i=0; i<arr->length; i++) {
        if(arr->A[i] == key) {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

void display(struct Array arr) {
    for(int i=0; i<arr.length; i++) 
        printf("%d ", arr.A[i]);
    printf("\n");
}

int main() {
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};
    display(arr);
    printf("%3d : index of 30\n", linear_search(arr, 30));
    printf("%3d : index of 50\n", linear_search(arr, 50));
    printf("%3d : index of 0\n\n", linear_search(arr, 0));

    display(arr);
    printf("%3d : index of 30\n", transposition_linear_search(&arr, 30));
    display(arr);
    printf("%3d : index of 30\n\n", transposition_linear_search(&arr, 30));
    
    display(arr);
    printf("%3d : index of 40\n", move_to_front_linear_search(&arr, 40));
    display(arr);
    printf("%3d : index of 40\n", move_to_front_linear_search(&arr, 40));
}  

/*
10 20 30 40 50 
  2 : index of 30
  4 : index of 50
 -1 : index of 0

10 20 30 40 50 
  2 : index of 30
10 30 20 40 50 
  1 : index of 30

30 10 20 40 50 
  3 : index of 40
40 10 20 30 50 
  0 : index of 40
*/