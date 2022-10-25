#include <stdio.h>

int power(int m, int n) {           // O(n)
    if(n==0)                        // Space complexity is large
        return 1;
    return power(m, n-1) * m;
}

// power(m, n) = power(m, n-1) * m

/*             _ 
              |     1                  if n==0
power(m, n) = |                                    recurrence relation
              |_    power(m, n-1) * m  if n>0

*/

int power_easy(int m, int n) {
    if(n == 0)
        return 1;
    else if(n%2 == 0)                              // 2**8 = (2*2)**(8/2)
        return power_easy(m*m, n/2);
    else                                           // 2**9 = 2*(2*2)**(5-1)/2
        return m * power_easy(m*m, (n-1)/2);
}

int power_loop(int m, int n) {
    int pow = 1;                    // O(n)
    for(int i=0; i<n; i++)          // Space complexity is small
        pow *= m;
    return pow;
}

int main() {
    printf("%d", power(5, 3));
    printf("\n%d", power_easy(5, 3));
    printf("\n%d", power(5, 3));
}

// 5 * 5 * 5 = 125

// 125
// 125
// 125