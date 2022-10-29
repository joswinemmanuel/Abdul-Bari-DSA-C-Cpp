#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10];
    A[0] = 100;
    A[1] = 200;
    printf("%d\n", A[0]);
    // Static Array in Stack

    int *p, *q, n;
    printf("Enter the size of the dynamic array : ");
    scanf("%d", &n);

    p = new int[n];
    p[0] = 100;
    printf("%d\n", p[0]);
    delete []p;
    // Dynamic array in C++

    q = (int *)malloc(n * sizeof(int));
    q[0] = 100;
    printf("%d\n", q[0]);
    free(q);
    // Dynamic array in C
}

/*
100
Enter the size of the dynamic array : 5
100
100
*/