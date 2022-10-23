/*

Each function will have it's own stack frame to store
it's variables just like the main function and when the function 
call is done, variables are created and when is out of the function 
it's activation record is deleted

Stack memory is organised

1) Heap memory is unorganised
2) Heap memory should be treated like a resource
when required we use it and when we don't require
we release the memory
3) A program cannot directly access heap memory, it can directly access anything
inside code section and stack, but will not access heap.
4) In order to access heap memory we use pointer
 - new  statement will allocate memory in heap
   int *p = new int[5];    in c++
   int *p = (int *)malloc(5*sizeof(int)); in c

if we don't need the memory we should deallocate it..it's a good practice

   delete []p;    for an array
   p = NULL;      just making the pointer points to nothing or 0

*/