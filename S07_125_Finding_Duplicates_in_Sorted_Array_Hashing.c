/*

Let A be an Array
make an array H having size (max(A))
Initialize all the value of H to 0
now loop through A, for each value in A
increment that value of index in H by 1

so the index in H with value 1 is present
in A and the value in each index of H 
is the count of that value in A

for(i=0; i<n; i++) {
    H[A[i]]++;
}

for(i=0; i<=max(A); i++) {
    if(H[i]>1)
        printf("%d is occuring %d times\n", i, H[i]);    
}

Time Complexity : O(n)
*/