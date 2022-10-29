#include <bits/stdc++.h>

int main() {
    // Method 1
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("Using Method 1\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%-2d ", A[i][j]);
        }
        printf("\n");
    }

    // Method 2
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];  // or B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = new int[4];

    printf("\nUsing Method 2\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%-2d ", B[i][j]);
        }
        printf("\n");
    }

    // Method 3
    int **C;
    C = new int *[3];   // or C = (int **)malloc(3 * sizeof(int *));
    C[0] = new int[4];
    C[1] = new int[4];  // or C[1] = (int *)malloc(4 * sizeof(int)); 
    C[2] = new int[4];  

    printf("\nUsing Method 3\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%-2d ", C[i][j]);
        }
        printf("\n");
    }
}

/*
Using Method 1
1  2  3  4  
5  6  7  8  
9  10 11 12 

Using Method 2
0  0  0  0  
0  0  0  0  
0  0  0  0  

Using Method 3
0  0  0  0  
0  0  0  0  
0  0  0  0 
*/