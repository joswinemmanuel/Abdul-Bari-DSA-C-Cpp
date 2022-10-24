/* 

Linear Recursion
 - A function calling itself only one time

Tree Recursion
• If a recursive function calling itself more than one time then it is tree
recursion
syntax :
fun(n) {
    if( n > 0 ) {
        ………..
        ………..
        ………..
        ………..
	
        fun(n -1);
        ………..
        ………..

        fun(n-1);
        ……….
        ……….
    }
}

Example :
void fun(int n) {
    if(n>0) {
        printf("%d", n);

        fun(n-1);
        fun(n-1);
    }
}

fun(3);

Activation record idea

                    fun(3)
                 /    |     \
                3   fun(2)    fun(2) (similar to fun(2) to left)
                  /   |    \
                 2   fun(1)  fun(1) (similar to fun(1) to left)
                   /  |    \
                  1  fun(0) fun(0) 

Output : 3 2 1 1 2 1 1  

No. of calls in each level
level 0 = 1 call
level 1 = 2 calls
level 2 = 4 calls
level 3 = 8 calls

thus, total calls  = 2**0 + 2**1 + 2**2 + 2**3   a G.P
                   = 1 + 2 + 4 + 8 = 15
                   = 2**(3+1) - 1 = 15
            = 2**(n+1) - 1

    = O(2**n)

Time Complexity = O(2**n)
Space Complexity depends on what the maximum height of
the stack is = O(n)

*/