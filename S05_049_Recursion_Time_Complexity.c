/*
void fun(int n) {           --- Function: T(n)
    if(n>0) {               --- 1   
        printf("%d", n);    --- 1
        fun(n-1);           --- Function: T(n-1)
    }
}

Time complexity = No. of recursion X Time complexity of each recursion

Using Recurrence Relation
 - We assume time taken by the function is T(n)
 - Therefore the total time will be the sum of all the 
   statements in the function
 - Total T(n) = T(n-1) + 2
        _
       |  1           if n=0
T(n) = |                        this is the recurrence relation
       |_ T(n-1) + 2  if n>0   

If we solve this using induction method or successive substitution
method we will get the time complexity of the recursive function

before that if we have a constant value in T(n-1) + 2(this constant)
we should make it as 1      ... it becomes T(n-1) + 1

T(n) = T(n-1) + 1 ---- (1)

T(n-1) = T((n-1) - 1) + 1 = T(n-2) + 1 substitute this in (1)

T(n) = T(n-2) + 1 + 1 = T(n-2) + 2 ---- (2)

similarly

T(n) = T(n-3) + 3  ---- (3)
T(n) = T(n-4) + 4  ---- (4)

T(n) = T(n-k) + k  ---- (5)

assume that n-k = 0
Therefore k = n         (5) becomes
T(n) = T(n-n) + n
T(n) = T(0) + n
T(n) = 1 + n

This can be written as O(n)

*/


