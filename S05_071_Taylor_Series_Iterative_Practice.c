/*
Taylor Series e**x

e**x = 1 + x/1! + (x**2)/2! + (x**3)/3! + (x**4)/4! + ... + n terms
*/

#include <stdio.h>

double e(int x, int n) {
    double s=1, num=1, den=1;
    for(int i=1; i<n; i++) {
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}

int main() {
    printf("%lf", e(1, 10));
}

// 2.718282