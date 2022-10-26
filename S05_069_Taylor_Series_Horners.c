/*
Taylor Series e**x

e**x = 1 + x/1! + (x**2)/2! + (x**3)/3! + (x**4)/4! + ... + n terms

e**x = 1 + x/1[ 1 + x/2 [ 1 + x/3 [ 1 + x/4 ]]]

*/ 

#include <stdio.h>

double e(int x, int n) {
    double s = 1;
    for(; n>0; n--) {           // using loop
        s = 1 + ((double)x/n)*s;
    }
    return s;
}

double ee(int x, int n) {
    static double s = 1;
    if(n == 0)
        return s;               // using recursion
    s = 1 + ((double)x/n)*s;
    return ee(x, n-1);
}

int main() {
    printf("%lf\n", e(1, 10));
    printf("%lf", ee(1, 10));
}

// 2.718282
// 2.718282