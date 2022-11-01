#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];     
    int size;
    int length;
};

int binary_search(struct Array arr, int value) {
    int low = 0;
    int high = arr.length-1;
    int mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr.A[mid] > value)
            high = mid - 1;
        else if(arr.A[mid] < value)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int R_binary_search(struct Array arr, int low, int high, int value) {
    int mid;
    if(low <= high) {
        mid = (high + low) / 2;
        if(arr.A[mid] > value)
            return R_binary_search(arr, low, mid-1, value);
        else if(arr.A[mid] < value)
            return R_binary_search(arr, mid+1, high, value);
        else
            return mid;
    }
    return -1;
}

void display(struct Array arr) {
    printf("Elements are : ");
    for(int i=0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

int main() {
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};

    display(arr);
    printf("\n%d : index of 40, using iterative method\n", binary_search(arr, 40));
    printf("%d : index of 40, using recursive method\n", R_binary_search(arr, 0, arr.length-1, 40));

}   

/*
Elements are : 10 20 30 40 50 
3 : index of 40, using iterative method
3 : index of 40, using recursive method
*/