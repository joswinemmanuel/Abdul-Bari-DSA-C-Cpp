/*
        How to increase size of an Array

int *p = new int[5];

// create a new pointer pointing to the new array of any size
int *q = new int[10];

// Transfer all the element in array pointing to p to
// array pointing to q
for(int i=0; i<5; i++) {
    q[i] = p[i];
}

// delete the array to which p is pointing on, to avoid memory leak
delete []p;

// make p point to the array to which q is pointing
p = q;

// remove q
q = NULL;

Thus now size of array to which p is pointing on is 10, increased

*/




