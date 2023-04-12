/*

Technique 1 :
    Let A be an array of natural numbers
    Let n be the largest natural number in array
    so by formula (n*(n+1))/2
    we can find sum of first n natural numbers let it be T
    Let S be sum of all elements in the array
    Thus, missing number is = T - S
    This is in case of number starting from 1

Technique 2 :

    If the sequence is starting from any point
    say from 6 to ... Ex : [6, 7, 8, 9, 10]
    or any case

    Subtract the value with the index
    say the result be R
    now go on performing subtraction 
    on the next elements in the array with its index
    the results will be R
    when the result is not R, stop
    so there the sequence is broke
    and R+index(where the sequence broke) is the missing value

    diff = A[0] - 0;
    for(i=0; i<n; i++) {
        if(A[i]-i != diff) {
            printf("Missing element is %d", diff+i);
            break;
        }
    }

    Time Complexity : O(n)

*/