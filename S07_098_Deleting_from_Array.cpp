/*

        Deleting from Array

• Removing an element from an array is called deleting
• After deleting an element the space must not be empty in an
array so shift the bits accordingly
• The index should not be beyond the array
Syntax : Delete( 3 )
	 	 x = A[ index ]
	 	 for( i = index ; i < length - 1 ; i++ )
	 	 {
	 	 	 A[ i ] = A[ i+1] ;
	 	 }	 

      // worst -  O(n)
      // best - O(1)
*/