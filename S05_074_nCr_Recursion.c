/*

nCr = (n!) / (r! * (n-r)!)

*/

/*
int C(int n, int r) {
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);               // O(n)
    t3 = fact(n-r);
    return t1 / (t2 * t3);
}
*/

/*
    Pascal's triangle


                0C0                             1
            1C0     1C1                       1   1
        2C0     2C1     2C2                 1   2   1
    3C0     3C1     3C2     3C3           1   3   3   1
4C0     4C1     4C2     4C3     4C4     1   4   6   4   1

Take 4C2 :   4C2 =     3C1     +   3C2
             nCr = (n-1)C(r-1) + (n-1)Cr

*/

int CC(int n, int r) {
    if(r==0 || n==r)
        return 1;
    return CC(n-1, r-1) + CC(n-1, r);
}