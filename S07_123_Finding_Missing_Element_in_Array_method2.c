/*

Let A be an array of numbers
Make another array B of size (max element in A)
Now for all the elements in A
Make index(element value of A) in B as 1
So in B, the index with value 0 are the missing Elements
B is called Hash table or Bit set


h=max(A);

for(int i=0; i<n; i++) {
    B[A[i]]++;
}

for(i=0; i<h; i++) {
    if(B[i]==0) {
        printf("%d is missing\n", i);
    }
}

Total Time Complexity : O(n)

*/