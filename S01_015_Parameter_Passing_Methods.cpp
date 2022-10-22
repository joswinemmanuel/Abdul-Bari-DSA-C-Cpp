/*

Pass by value :
• In pass by value actual parameters will not be modified if any
changes are done to the formal parameters

Example :
void swap(int x , int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a ,b;
    a =10;
    b=20;
    swap(a,b);
    printf("%d %d", a ,b);
}

Call by address :
• Here the address of actual parameters are passed to formal
parameter and formal parameters must be pointers
• Any changes done inside function will modify the actual parameters

void swap(int *x , int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a,b;
    a =10;
    b=20;
    swap(&a,&b);
    printf("%d %d", a,b);
}
• One function cannot access value of another function directly but it
can access it indirectly through pointers
• Thus call by address is a suitable mechanism for modifying actual
parameters

Call by reference :
• References are part of c++ programming, its one of the useful and
powerful mechanism of this language
• To make a function as call by reference we just need to add & in the
parameters, these are the references

void swap(int & x , & int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a ,b;
    a =10;
    b=20;
    swap(a ,b);
    printf("%d %d", a ,b);
}

*/ 
