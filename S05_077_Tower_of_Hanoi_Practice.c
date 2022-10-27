#include <stdio.h>

void TOH(int n, int A, int B, int C) {
    if(n>0) {
        TOH(n-1, A, C, B);
        printf("move %d to %d\n", A, C);
        TOH(n-1, B, A, C);
    }
}

int main() {
    printf("For 3 disks :\n");
    TOH(3, 1, 2, 3);
    printf("\nFor 2 disks :\n");
    TOH(2, 1, 2, 3);
    printf("\nFor 1 disks :\n");
    TOH(1, 1, 2, 3);
    
}

/*
For 3 disks :
move 1 to 3
move 1 to 2
move 3 to 2
move 1 to 3
move 2 to 1
move 2 to 3
move 1 to 3

For 2 disks :
move 1 to 2
move 1 to 3
move 2 to 3

For 1 disks :
move 1 to 3
*/