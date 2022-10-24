#include <stdio.h>

int fun(int n) {
    if(n>0) {
        return n + fun(n-1);
    }

    return 0;
}

// using static variable
int fun1(int n) {
    static int x=0;
    if(n>0) {
        x++;
        return fun1(n-1) + x;
    }

    return 0;
}

// using global variable
int y=0;
int fun2(int n) {
    if(n>0) {
        y++;
        return fun2(n-1) + y;
    }

    return 0;
}

int main() {
    printf("%d\n", fun(3));   // Sum of first n natural numbers function
    // 6
    printf("%d\n", fun1(3));  // Square function
    // 9
    printf("%d\n", fun2(3));  // Another square function but can only be
    // 9                      // used one time as global variable used

}