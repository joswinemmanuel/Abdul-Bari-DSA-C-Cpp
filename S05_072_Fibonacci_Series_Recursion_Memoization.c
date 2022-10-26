/*

fibonacci series : 0 1 1 2 3 5 8 13 ...

         |  0                   if n==0
fib(n) = |  1                   if n==1
         | fib(n-2) + fib(n-1)  if n>1

*/

 
#include <stdio.h>

int fib(int n) {
    if(n<=1)                        // a total of 13 call is made for fib(5)
        return n;                   // O(2**n)    too much time consuming
    return fib(n-2) + fib(n-1);
}

// A recursive function is calling itself multiple times for the same value
// such a recursive function is called as Excessive Recursion
// We can retain the values for which answer is found, we have to take
// the help of static variables or global variables
// let's use a static array
// this approach is called as memoization...storing the result in an array
// and not doing overlapping calls

int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int fibonacci(int n) {
    if(n<=1) {
        F[n] = n;
        return n;
    } else {
        if(F[n-2] == -1)
            F[n-2] = fib(n-2);
        if(F[n-1] == -1)
            F[n-1] = fib(n-1);
        return F[n-2] + F[n-1];
    }
}

int fib_loop(int n) {
    if(n<=1) 
        return n;
    int a=0, b=1, c;
    for(int i=0; i<n; i++) {        // O(n)
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    printf("%d", fib(5));
    printf("\n%d", fib(5));
    printf("\n%d", fibonacci(5));
}

// 5
// 5
// 5