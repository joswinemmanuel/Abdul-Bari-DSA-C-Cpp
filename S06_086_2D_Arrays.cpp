/*

An array inside an array is 2D array

1) Declaration
int A[3][4];
A[0][1] = 10;

2) Declaration and initialization
int A[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};

3) Using pointers
int *A[3];  // array of size 3 is made in stack
// an array of integer pointers, all 3 elements in array will be pointers
A[0] = new int[4];
A[1] = new int[4];  // rest of the array are made in heap
A[2] = new int[4];
// so we point each one of the pointer to different array
// this will also form a 2D array
A[1][2] = 15;

4) Using double pointers
int **A;            // double pointer will be in stack
A = new int *[3]      // array of size 3 is made in heap
// an array of integer pointers, all 3 elements in array will be pointers
A[0] = new int[4];
A[1] = new int[4];  // rest of the array are also made in heap
A[2] = new int[4];

*/

