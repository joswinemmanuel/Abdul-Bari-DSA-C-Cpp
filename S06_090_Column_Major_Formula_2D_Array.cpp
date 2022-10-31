/*

Elements in a 2D array are mapped in a 1D array 
column by column

addr(A[1][2]) = 200 + ((2 * m)+1) * 2
addr(A[1][3]) = 200 + ((3 * m)+1) * 2

therefore for column major
addr(A[i][j]) = Lo + ((j * m)+i) * w
where Lo is base address, i and j are index, w is size of each element, m is no. rows

for row major
addr(A[i][j]) = Lo + ((i * n)+j) * w

both are equally efficient... the compiler may chose any of them

but C and C++ follows row major formula

*/