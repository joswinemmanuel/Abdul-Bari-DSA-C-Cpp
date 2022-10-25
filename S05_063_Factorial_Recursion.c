#include <stdio.h>

int fact(int n) {
    if(n<=1)                        // O(n)
        return 1;                   // Space complexity also high
    return fact(n-1) * n;
}

// fact(n) = fact(n-1) * n

/*            _ 
             |   1              if n<=1
   fact(n) = |                               recurrence relation
             |_  fact(n-1) * n  if n>1

*/

int fact_loop(int n) {
    int f = 1;
    for(int i=1; i<=n; i++)         // O(n)
        f *= i;                     // Space complexity is low
    return f;
}

int main() {
    printf("%d\n", fact(5));
    printf("%d", fact_loop(5));
}

// 1 * 2 * 3 * 4 * 5 = 120
// 120
// 120