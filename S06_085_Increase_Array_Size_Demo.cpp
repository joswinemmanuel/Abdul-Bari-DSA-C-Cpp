#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(5 * sizeof(int));    // Pointer p pointing to array of size 5
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=5;

    int *q = (int *)malloc(10 * sizeof(int));   // Pointer q pointing to array of size 10

    for(int i=0; i<5; i++) {
        q[i] = p[i];                // Giving values in p to q
    }

    free(p);                        // Deleting the array of size 5 from heap memory

    p = q;                          // Pointing p to array of size 10

    q = NULL;                       // Removing the pointing of q to NULL

    for(int i=0; i<10; i++) {
        printf("%d ", p[i]);        // Printing all the values in p
    }

    // 1 2 3 4 5 0 0 0 0 0
}