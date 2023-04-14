/*

For an unsorted array A
let i be the first element and make sure it is not -1
set count = 1
let j be the next element and if j==i increment count
print i and count if count>1
repeat this for all the elements of A

for(i=0; i<n-1; i++) {
    count=1;
    if(A[i]!=-1) {
        for(j=i+1; j<n; j++) {
            if(A[i]==A[j]) {
                count++;
                A[j]=-1;
            }
        }
        if(count>1)
            printf("%d occured %d times\n", A[i], count);
    }
}

This will be O(n**2)

or we can use Hashing just as same as
finding duplicates in unsorted array using Hashing

and Time complexity is : O(n)

*/