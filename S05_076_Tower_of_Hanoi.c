/*
    Tower of Hanoi

we have 3 towers

  A      B      C
from   using    to

   ---
  -----
 -------
---------
    A       B       C

we have to move all the disk from tower A to tower C

 - we have to move one disk at a time
 - larger disk should not be kept over a smaller disk


for 1 disk: TOH(1, A, B, C)
   move disk from A to C using B

for 2 disk : TOH(2, A, B, C)
 - TOH(1, A, C, B)
 - move disk from A to C using B, same as disk 1 case
 - TOH(1, B, A, C)

for 3 disk : TOH(3, A, B, C)
 - TOH(2, A, C, B)
 - move disk from A to C using B, same as disk 1 case
 - TOH(2, B, A, C)

thus, for n disk : TOH(n, A, B, C)
 - TOH(n-1 , A, C, B)
 - move disk from A to C using B, same as disk 1 case
 - TOH(n-1 , B, A, C)  
 
void TOH(int n, int A, int B, int C) {
    if(n>0) {
        TOH(n-1, A, C, B);
        printf("from %d to %d", A, C);
        TOH(n-1, B, A, C);
    }
}

TOH(3, 1, 2, 3);

the final output of this will be the steps to solve the problem
if (a to b) move the top disk from a to b

for n = 3 : 15 calls
for n = 2 : 7 calls
for n = n : 2**(n+1) - 1 calls

therefore : O(2**n)
*/