#include <stdio.h>

int fib_rec(int n) {
    if(n <= 1)
        return n;
    return fib_rec(n-2) + fib_rec(n-1);
}

int fib_loop(int n) {
    if(n<=1)
        return n;
    int a=0, b=1, c;
    for(int i=2; i<=n; i++) {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fib_arr(int n) {
    if(n<=1) {
        F[n] = n;
        return n;
    } else {
        if(F[n-2] == -1)
            F[n-2] = fib_arr(n-2);
        if(F[n-1] == -1)
            F[n-1] = fib_arr(n-1);
        return F[n-2] + F[n-1];
    }
}

int main() {
    printf("%d", fib_rec(5));
    printf("\n%d", fib_loop(5));
    printf("\n%d", fib_arr(5));
}

// 5
// 5
// 5