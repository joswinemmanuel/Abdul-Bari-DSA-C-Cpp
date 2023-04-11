/*

Average Case Analysis of Binary Search

 - Average unsuccessful search is O(log n)
 - Average successful search is O(log n)
 
• For finding the average case time we have to first consider the
internal nodes , the no of comparison for internal nodes depends on
the level of tracing tree the circular nodes ( I ) are the internal nodes
which are successful
• The square nodes are the unsuccessful ones ( E )
E = nlogn
E = I + 2n
e = I + 1
As (n) = 1 + I / n
Au (n) = E / n + 1 = nlogn / n + 1
• The average unsuccessful time is logn
• The average successful time is also logn

*/
