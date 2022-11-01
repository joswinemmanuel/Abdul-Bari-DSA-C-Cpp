/*

        Inserting in an Array

• First consider the following array as an example
Size = 10
Length = 6
• For displaying the elements
Syntax
	 	 for( i= 0; i < length; i++ )
	 	 {
	 	 	 print( A[ i ] )                 // O(n)
	 	 }


• Add(x) / Append (x) : adding an element at the end of an array that is
adding in the next free space

Size = 10
Length = 7
Syntax 	
	 	 A[ Length ] = x ;          // O(1)
	 	 Length++;


• Insert( index, x) : It takes index and element, meaning to insert an
element in a given index
• If the space is free the value will be inserted automatically , but if the
space is already taken by another element it must be moved to next
space in order to create space for the new insert value
Syntax : Insert(4, 15)
	 	 	 for( i = Length; i > index ; i - -)
	 	 	 {
	 	 	 	 A[ i ] = A[ i -1] ;                // max - O(n) - we take this, as it's worst case
	 	 	 }                                      // min - O(1)
	 	 	 A[ index ] = x ;
	 	 	 Length ++;

*/