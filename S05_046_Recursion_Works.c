// A function calling itself is called as a Recursive function.

#include <stdio.h>

void fun1(int n) {
    if(n > 0) {
        printf("%d ", n);       // Ascending
        fun1(n-1);
    }
}

void fun2(int n) {
    if(n > 0) {
        fun2(n-1);              // Descending
        printf("%d ", n);
    }
}

int main() {
    int x=3;
    fun1(x);
    printf("\n");
    fun2(x);
}
// 3 2 1
// 1 2 3

/* Tracing fun1()

        fun1(3)
        /     \
       3     fun1(2)
             /    \
            2     fun1(1)
                  /    \
                 1    fun1(0)

*/

/* Tracing fun2()

        fun2(3)
        /    \
    fun2(2)   3
      /    \
  fun2(1)   2
    /    \
fun2(0)   1

*/