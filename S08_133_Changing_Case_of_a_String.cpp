/*

A = 65, a = 97
B = 66, b = 98
97-65 = 32
The gap between a small letter and its corresponding
capital letter is 32

Thus
upper case to lower case : Add 32
lower case to upper case : Subtract 32

int main() {
    char A[] = "WELCOME";
    for(int i=0; A[i]!='\0'; i++) {
        A[i] += 32;
    }
    printf("%s", A);    // output will be : welcome
}

Toggling case:

int main() {
    char A[] = "WelCoME";
    for(int i=0; A[i]!='\0'; i++) {
        if(A[i]>=65 && A[i]<=90) {
            A[i] += 32;
        } else if(A[i]>=97 && A[i]<=122) {
            A[i] -= 32;
        }
    }
    printf("%s", A);    // output will be : wELcOme
}

*/