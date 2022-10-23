/*

Time
 -Every simple statement in the program takes 1 unit of time

EX
void swap() {
    int t;
    t = x; --- 1
    x = y; --- 1
    y = t; --- 1
}
Therefore a total of 3 units of time   --- O(1)

int sum(int a[], int n) {
    int s, i;
    s = 0;                      --- 1
    for(int i=0; i<n; i++) {    --- n+1
        s += a[i];              --- n*1
    }
    return s;                   --- 1
}
Total = 1+1+(n+1)+n = 2n+3 = O(n)

void add(int n) {
    int i,j;
    for(i=0; i<n; i++) {                    --- n+1
        for(j=0; j<n; j++) {                --- n*(n+1)
            c[i][j] = a[i][j] + b[i][j];    --- n*n*1
        }
    }
}
Total = (n+1) + n*(n+1) + n*n = n + 1 + n**2 + n + n**2 
      = 2*(n**2) + 2*n + 1                              
      = O(n**2)

*/