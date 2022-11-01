/*

        Linear Search

• They are 2 search method in an array
    I. Linear search
    II. Binary search

• Linear search :
    • All the elements must be unique here
    • The value you are searching is called key, In linear search we search
    the key element one by one linearly
    • We search the element by comparing it with the key value 
    • The result of the search is the location of the element where its
    present (index number) , it is very useful in accessing the element in
    the list
    • If the element is not found throughout the list that means it is not
    present in the list therefore search is unsuccessful
Syntax :
	 	 for( i = 0; i < length ; i++ )
	 	 {
	 	 	 if( key == A[ i ] )
	 	 	 return i;	 	 	 //if search is successful it ends here
	 	 }
	 	 

	 	 return -1;	 	 	 	 // if search unsuccessful returns -1

        // Worst case : O(n)
        // Best case  : O(1)
*/