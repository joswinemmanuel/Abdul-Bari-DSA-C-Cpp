/*
Taylor Series e**x

e**x = 1 + x/1! + (x**2)/2! + (x**3)/3! + (x**4)/4! + ... + n terms

there are three values that are involved in the case of taylor series
sum(n), fact(n), pow(x, n)

Function can return only one value
When we have to involve multiple value in a recursion
we use static variables

*/

#include <stdio.h>

double e(int x, int n) {
    static double p=1, f=1;
    double r;
    if(n == 0)
        return 1;
    else {
        r = e(x, n-1);
        p *= x;
        f *= n;
        return r + p/f;
    }
}

int main() {
    int x=1, n=10;
    printf("%lf", e(x, n));
}

// 2.718282