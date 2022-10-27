#include <stdio.h>

int fact(int n) {
    if(n<=1)
        return n;
    return fact(n-1) * n;
}

int C(int n, int r) {
    int t0, t1, t2;
    t0 = fact(n);
    t1 = fact(r);
    t2 = fact(n-r);
    return t0 / (t1 * t2);
}

int CC(int n, int r) {
    if(r==0 || n==r)
        return 1;
    return CC(n-1, r-1) + CC(n-1, r);
}

int main() {
    printf("%d", C(5, 3));
    printf("\n%d", CC(5, 3));
}

// 10
// 10