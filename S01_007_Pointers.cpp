/*

Pointer is a address variable that is meant for storing address of another variable
not data itself
• They are used for indirect access of data
• For a program to use heap memory , pointers is used
• To access heap memory and resources outside the main memory like
internet, keyboard , monitor etc pointers is used
• Pointers are also used for parameter passing

Example :
int main() {
    int a = 10;		 	 	 	 - data variable
    int *p;	 	 	 	 	 - declaration
    p = &a;	 	 	 	 	 - Assignment / Initialisation
    printf("%d", a);	 	 
    printf("%d" , *p);	 	 	 - dereferencing
}

• Accessing Heap memory through pointer

In C++
int main() {
    int *p;
    p = new int[5];
}

In C
#include <stdlib.h>
int main() {
    int *p;
    p = (int *)malloc(5*size(int))
}

