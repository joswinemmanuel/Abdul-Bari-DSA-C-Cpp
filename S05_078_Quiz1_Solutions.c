/*

Question 1:
Consider the following  C function

int f(int n) {
    static int i = 1
    if (n>=5) return n;
    n = n+i;
    i++;
    return f(n);
}

the value returned by f(1) is

ANS) 7

*/

/*

Question 2:
Consider the following C-program

void foo(int n, int sum) {
    int k = 0, j = 0;
    if (n = = 0) return;
    k = n % 10;
    j = n/10;
    sum = sum + k;
    foo (j, sum);
    printf(“%d”, k)
}

int main() {
    int a = 2048, sum = 0;
    foo (a, sum);
    printf(“%d\n”, sum);
}

What does the above program print?

ANS) 2, 0, 4, 8, 0

*/

/*
Question 3:
What is the return value of f(p, p), if the value of p is initialised to 5 before the call? Note that the first parameter is passed by reference, whereas the second parameter is passed by value. 

int f(int &x, int c){
    c = c — 1; 
    if (c = = 0) return 1; 
    x = x + 1; 
    return f(x,c) * x;
}

ANS) 6561

*/

/*

Question 4:
Consider the following C function. 

int fun(int n) { 
    int x=1, k; 
    if (n==1) return x; 
    for (k=1; k<n; ++k) 
        x=x + fun (k) * fun (n — k); 
    return x; 
}

The return value of fun (5) is

ANS) 51

*/

/*
Question 5:
What will be the output of the following C program? 

void count(int n) {
    static int d = 1; 
    printf("%d", n); 
    printf("%d", d); 
    d++; 
    if (n > 1) count (n-1); 
    printf("%d", d);
} 

void main() {
  count (3);
} 

ANS) 3 1 2 2 1 3 4 4 4

*/