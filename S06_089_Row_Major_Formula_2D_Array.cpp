/*

    2 Representations of a 2D array mapped in a single dimension array

1) Row-major Mapping
2) Column-major Mapping

1) Row-major Mapping
  In this, the elements are stored row by row 
address(A[1][2]) = 200 + (4*1 + 2) * 2 = 212
address(A[2][3]) = 200 + (4*2 + 3) * 2 = 222
address(A[1][2]) = Lo + (n*i + j) * w
where Lo is base address, w is size of data type, n is no. of columns,
i is first index, j is second index

if index was from 1
address(A[i][j]) = Lo + (n*(i-1) + (j-1)) * w