#include <stdio.h>

void tree_rec(int n) {
    if(n>0) {
        printf("%d ", n);
        tree_rec(n-1);
        tree_rec(n-1);
    }
}

int main() {
    tree_rec(3);
    printf("\n");
    tree_rec(4);
}

// 3 2 1 1 2 1 1
// 4 3 2 1 1 2 1 1 3 2 1 1 2 1 1