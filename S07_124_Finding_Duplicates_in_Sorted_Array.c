/*

If in an array A, if same element is appearing more than once
then it will be a duplicate value, we can easily count the 
number of duplicates as they are next to each other in a sorted array

To print the duplicate elements :
    lastDuplicate = 0;
    for(int i=0; i<n-1; i++) {
        if(A[i]==A[i+1] && A[i]!=lastDuplicate) {
            printf("%d is a duplicate number\n", A[i]);
            lastDuplicate = A[i];
        }
    }

To count the number of duplicate elements :

    for(int i=0; i<n-1; i++) {
        if(A[i]==A[i+1]) {
            j = i+1;
            while(A[i]==A[j]) j++;
            printf("Count of %d is %d\n", A[i], j-1);
            i = j-1;
        }
    }

Time Complexity : O(n)