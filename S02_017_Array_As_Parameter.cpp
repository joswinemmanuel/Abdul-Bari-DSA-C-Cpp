/*

Arrays as Parameters

• The following function is taking parameter as an array , int A[ ] ,the
declared array must be empty and its size must be provides as
follows int n
• The reason for array in parameter being empty is because it acts as
a pointer
• Arrays cannot be passed as values , arrays can only be passed by
address
• As its call by address its possible to change the values of the arrays

void fun(int A[ ] , int n) {
    int i;
    for(i=0; i<n ; i++)
        printf("%d"; A[i]);
}
int main() {
    int A[5] = {2,4,6,8,10};
    fun(A,5);
}

*/
