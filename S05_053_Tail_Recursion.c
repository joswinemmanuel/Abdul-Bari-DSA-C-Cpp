/* 

Types of Recursion
 - Tail Recursion
 - Head Recursion
 - Tree Recursion
 - Indirect Recursion
 - Nested Recursion

Tail Recursion
 If a recursive function is calling itself and that call
 is the last statement in the function, then it is a tail recursion
 after that call there is nothing

example
*/

#include <stdio.h>

void fun(int n) {
    if(n>0) {
        printf("%d ", n);
        // 5 4 3 2 1
        fun(n-1);           // Tail recursion
    }
}

int main() {
    fun(5);
}

/*
fun(n) {
    if(n>0) {
        ___
        ___
        fun(n-1) + n;  is not a tail recursion as + n is there
    }
}
nothing else should be done at returning time
*/

/*
void fun(int n) {
    while(n>0) {
        printf("%d ", n);
        n--;
    }
}

Tail recursions can be easily converted to loops
 - time taken by loop O(n)
 - time taken by tail recursion O(n)    both same
 - for recursion it utilize stack, it makes about n+1 activation
   records, thus space required is O(n) for tail recursion
-  but for loop, space complexity is just O(1)

so if you're having a tail recursion it's better to convert it into
a loop for efficient space 

*/