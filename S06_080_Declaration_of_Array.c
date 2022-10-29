/*

int A[5];   - this is the declaration of array A
thus, initially it contains all garbage values

1) int A[5] = {1, 2, 3, 4, 5}; - is declaration along with initialization

2) int A[5] = {1, 2}; - first two will be 1 and 2, rest will be 0s 

3) int A[5] = {0};      - all elements will be 0

4) int A[] = {1, 2, 3}; - an array of size 3 will be created with these elements

or we can use index to assign value to each index in array
int A[0] = 100;

We can use index to access each element in the array
printf("%d", A[0]);

- for(int i=0; i<4; i++) {
    printf("%d ", A[i]);
}
can be used to get all the values in the array

printf("%d", A[2]);
printf("%d", 2[A]);         // we can use all these to get the element in index 2
printf("%d", *(A+2));

*/