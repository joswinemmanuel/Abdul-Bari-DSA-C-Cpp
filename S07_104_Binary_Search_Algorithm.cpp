/*

        Binary Search Algorithm

• The algorithm for binary search is as follows
 iterative procedure
Algorithm BinSearch(l, h, key) {
    while(l<=h) {
        mid = (l+h)/2;
        if(key==A[mid])
            return mid;
        else if (key<A[mid])
            h=mid-1;
        else
            l=mid+1;
        }
        return -1;
    }

        Recursive procedure

Algorithm RBinSearch(l,h,key) {
    if(l<=h) {
    mid = (l+h)/2;
    if(key==A[mid])
        return mid;
    else if (key<A[mid])
        return RBinSearch(l, mid-1, key);
    else
        return RBinSearch(mid+1, h, key);
    }
    return-1;
}
• Tail and loop recursive are similar
• If given option for both always go for loop recursive
as its better than it because it uses stack

*/