#include <stdio.h>

int main() {
    int A[5];   // all will be garbage values
    int B[5] = {1, 2, 3, 4, 5};
    int C[10] = {1, 2, 3}; // rest of the elements will be 0
    int D[5] = {0};  // rest of the elements will be 0
    int E[] = {1, 2, 3};  // array of size 3 will be made

    /*for(int i=0; i<5; i++) {
        printf("%u", &A[i]);    // To print address
    }*/

}