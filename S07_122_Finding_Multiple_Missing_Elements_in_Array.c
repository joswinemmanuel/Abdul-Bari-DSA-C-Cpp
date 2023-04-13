/*

If the sequence is starting from any point
say from 6 to ... Ex : [6, 7, 8, 9, 10]
or any case

Subtract the value with the index
say the result be R
now go on performing subtraction 
on the next elements in the array with its index
the results will be R
when the result is not R, stop, let the result be newR
so there the sequence is broke
and R+index(where the sequence broke) is the missing value
Thus, newR is the new difference
now go on performing subtraction 
on the next elements in the array with its index
the results will be newR
when the result is not newR, stop
so there the sequence is again broke
and newR+index(where the sequence broke) is the missing value

diff = A[0]-0;
for(int i=0; i<n; i++) {
    if(A[i]-i != diff) {
        while(diff < A[i]-i) {
            printf("Missing element : %d\n", diff+i);
            diff++;
        }
    }
}

Time Complexity : O(n)
we don't have to consider the while loop's complexity
as it is negligible

*/