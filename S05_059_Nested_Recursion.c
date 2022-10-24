/*

        Nested Recursion
• A recursive function will pass parameter as a recursive call is called
nested recursion
• A recursive function taking recursive call as its parameter is called
nested recursion

Example :

int fun(int n) {
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}
fun(95);

        fun(95)
          |
        fun(fun(106))
          |     |
          |     96
        fun(96)
          |
        fun(fun(107))
          |      |
          |      97
        fun(97)
          |
        fun(fun(108))
          |     |
          |     98
        fun(98)
          |
        fun(fun(109))
          |      |
          |      99
        fun(99)
          |
        fun(fun(110))
          |      |
          |     100
        fun(100)
          |
        fun(fun(111))
          |      |
          |     101
        fun(101)
          |
          91

// 91

*/