/*

Indirect Recursion
 - In indirect recursion there will be more that one function
   and they are calling one another in a circular fashion
 - Fun B calling Fun A, Fun C calling Fun B, Fun C calling Fun A etc   

void A(int n) {
    if(___) {
        ___
        ___
        B(n-1);
    }
}

void B(int n) {
    if(___) {
        ___
        ___
        A(n-3);
    }
}

Example :

void funA(int n) {
    if(n>0) {
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n) {
    if(n>1) {
        printf("%d ", n);
        funA(n/2); 
    }
}

        A(20)
        /  \
       20   B(19)
            /  \
           19   A(9)
                /  \
               9    B(8)
                    /  \
                   8    A(4)
                        /  \
                       4    B(3)
                            /  \
                           3    A(1)
                                / \
                               1   B(0)
                                    |
                                    x
output : 20 19 9 8 4 3 1

*/