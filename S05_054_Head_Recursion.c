/*

    Head Recursion

• Structure for head recursion
void fun( int n ) {
    if( n > 0) {
        fun(n-1);           // head recursion
        ………..
        ………..
        ………..
    }
}
• Here the first statement inside the function is recursive call and
all the processing of this function will be done after that
• In head recursion the function doesn't have to process any
operation at the time of function calling it has to do everything at
the time of returning such functions are head recursion
    Head Recursion to Loop
• Although it is possible but It is difficult to convert head recursion
into a loop function

*/

#include <stdio.h>

void fun(int n) {
    if(n>0) {
        fun(n-1);
        printf("%d ", n);
    }
}

int main() {
    fun(5);
    // 1 2 3 4 5 
}