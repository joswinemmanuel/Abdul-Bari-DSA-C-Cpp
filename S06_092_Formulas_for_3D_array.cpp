/*

A[l][m][n]

row major
addr(A[i][j][k]) = Lo + [ (i*m*n) + (j*n) + k) ] * w

column major
addr(A[i][j][k]) = Lo + [ (k*l*m) + (j*l) + i) ] * w

*/