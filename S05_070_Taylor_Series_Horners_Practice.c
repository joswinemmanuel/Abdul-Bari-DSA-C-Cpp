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