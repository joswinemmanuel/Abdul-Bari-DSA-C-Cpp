/*

compiler have to convert name into address

int A[5] = {3, 5, 8, 4, 2};

A[3] = 10;
address(A[3]) = 200 + 3 * 2 = 206
address(A[3]) = Lo + 3 * 2

address(A[i]) = Lo + i * w  // formula used by compiler to convert any index to an address

where i is index, w is size of data type, Lo is base address
the program must know the base address of an array
base address of the array will be updated once the program starts running
and memory is allocated

if index start from 1

address(A[3]) = 200 + (3-1) * 2 = 204
address(A[3]) = Lo + (i-1) * w

therefore index starting from 0 is better as number of
operations is less

*/