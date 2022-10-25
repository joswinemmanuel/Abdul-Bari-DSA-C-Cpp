#include <stdio.h>

int sum(int n) {
    if(n<=0)            // Base case
        return 0;                       // O(n)
    return sum(n-1) + n;                // Space complexity also high
}                                       // As activation record is created for each recursive call

int sum_n_loop(int n) {
    int s=0;
    for(int i=1; i<=n; i++) {
        s += i;                         // O(n)
    }                                   // Space complexity is less
    return s;                           
}

int sum_n_formula(int n) {
    return (n*(n+1))/2;                 // O(1)
}                                       // Space complexity very less

// sum(n) = sum(n-1) + n
/*           _ 
            |   0              if n=0
   sum(n) = |                               recurrence relation
            |_  sum(n-1) + n   if n>0

*/
int main() {
    printf("%d\n", sum(5));
    printf("%d\n", sum_n_loop(5));
    printf("%d", sum_n_formula(5));
}

// 0 + 1 + 2 + 3 + 4 + 5 = 15
// 15
// 15
// 15