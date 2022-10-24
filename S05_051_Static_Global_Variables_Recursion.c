#include <stdio.h>

int fun(int n) {
    if(n>0) {
        return n + fun(n-1);
    }

    return 0;
}

// or do
// int x = 0; (set it as a global variable) and remove static int x=0;
int fun1(int n) {
    static int x=0;
    if(n>0) {
        x++;
        return fun1(n-1) + x;
    }

    return 0;
}

/*- static variables are created inside code section
  - there is a section for static and global variables inside code section
  - static variable will not be created everytime the function is called
    it will be done only at the loading time of a program, will have a single copy only
  - 
*/
int main() {
    printf("%d\n", fun(3));
    printf("%d\n", fun1(3));
}

// 6
/*       fun(3)
        /      
       fun(2) + 3
      /
     fun(1) + 2
    /
   fun(0) + 1
    |
    0
0 + 1 + 2 + 3 = 6
*/

// 9
/*     _
    x |_| -> 0 changed to -> 1 -> 2 -> 3

         fun(3)
        /      
       fun(2) + _=3
      /
     fun(1) + _=3
    /
   fun(0) + _=3
   |
   0
0 + 3 + 3 + 3 = 9
*/
