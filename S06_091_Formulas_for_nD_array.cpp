/*

A[d1][d2][d3][d4];

row major
addr(A[i1][i2][i3][i4]) = Lo + [ (i1*d2*d3*d4) + (i2*d3*d4) + (i3*d4) + i4 ] * w

generalization          = Lo + sigma(summation) [ ip (p=1 to p=n) * pi(product of) dq (q=p+1 to q=n) ] * w

column major
addr(A[i1][i2][i3][i4]) = Lo +[ (i4*d3*d2*d1) + (i3*d2*d1) + (i2*d1) + i1 ] * w

Operations count
row major for 4D = 3 + 2 + 1 
row major for 5D = 4 + 3 + 2 + 1
row major for nD = n-1 + n-2 + ... + 3 + 2 + 1 = n(n-1) / 2
Time Complexity = O(n**2)

but by taking common out from the row major expression
we can reduce the no. of multiplications
This is called as Honer's Rule
we can make it to O(n)

*/