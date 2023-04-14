/*

Let i be the first element in A
and j be the next element
if i+j=sum print i,j
increment the value of j and check condition till end of A
increment the value of i and perform the above till end of A

for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
        if(A[i]+A[j]==SUM)
            printf("%d %d", A[i], A[j]);
    }
}

O(n**2)

Faster method is hashing

let A be the Array and 
H be the Array with size max(A)
for each i element in A
let x = SUM-i
if H[x]==1 then print i and x
also make H[i] = 1
repeat this

for(i=0; i<n; i++) {
    if(H[SUM-A[i]]!=0)
        printf("%d + %d = %d", A[i], SUM-A[i], SUM)
    }
    H[A[i]]++;
}

Time Complexity : O(n), but more space required

*/