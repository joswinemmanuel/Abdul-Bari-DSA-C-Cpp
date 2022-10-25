#include <stdio.h>

int power(int m, int n) {
    if(n==0)
        return 1;
    return power(m, n-1) * m;
}

int power_easy(int m, int n) {
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return power_easy(m*m, n/2);
    else
        return power_easy(m*m, (n-1)/2) * m;
}

int main() {
    printf("%d\n", power(10, 3));
    printf("%d", power_easy(10, 3));
}

// 1000
// 1000