/*

        Improving Linear Search

- Transposition
• When you are searching for a key element there is a possibility
that you are searching the same element again
• To improve the speed of comparison , you can move a key
element repeatedly search one step forward this method is called
transposition

Syntax :
for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[i-1]);
	 	 	 return i-1;
	 	 }
}

- Move to head / front
• The second method is you can directly swap the key element to
the first element this process is called move to head . The next
search for the same element becomes faster.
for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[0]);
	 	 	 return 0;
	 	 }
}

*/