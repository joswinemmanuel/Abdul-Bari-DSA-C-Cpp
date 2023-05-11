/*

let i be the first element
let j be the last element
we check if i+j = k
if i+j > k then decrement j
if i+j < k then increment i
once you got a pair increment both i and j
when both i and j become same stop

i=0, j=n-1;
while(i<j) {
    if(A[i]+A[j] == k) {
        printf("%d+%d=%d", A[i], A[j], k);
        i++;
        j--;
    }
    else if(A[i]+A[j] < k) {
        i++;
    }
    else {
        j--;
    }
}

Time Complexity : O(n)

*/