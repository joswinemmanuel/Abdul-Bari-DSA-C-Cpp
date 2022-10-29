/*
Static array - Size of the array is static
one's an array is created the size cannot be modified
Size of the array is defined at compile time
created in Stack

Ex:
int A[5];
A[0] = 10;

//  Cannot be resized

Dynamic array - Size of the array is dynamic
We can create an array of any size at run time
created in Heap

Ex:
int n;
scanf("%d", n);  //or cin >> n;
int *p;
p = new int[n];  // in C++
  or
p = (int *)malloc(n * sizeof(int));  // in C

p[0] = 10;

we can delete the used memory in head...
or else it may cause memory leak problem

delete []p;     // in C++
   or
free(p);        // in C

// Can be resized