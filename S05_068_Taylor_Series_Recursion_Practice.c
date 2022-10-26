/*
Taylor Series e**x

e**x = 1 + x/1! + (x**2)/2! + (x**3)/3! + (x**4)/4! + ... + n terms
*/

#include <stdio.h>

double e(int x, int n) {
    static double p=1, f=1;
    double r;
    if(n == 0)
        return 1;
    r = e(x, n-1);
    p *= x;
    f *= n;
    return r + (p/f);
}

int main() {
    printf("%lf", e(1, 10));
}

// 2.718282