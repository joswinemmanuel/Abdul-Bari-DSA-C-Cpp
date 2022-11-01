/*

        Array as Abstract Data Type (ADT)

Data
 - Array Space
 - Size
 - Length (No. of elements)

        Array ADT
• Array ADT (Abstract Data Type)
• The representation of data is define by the compiler itself , However
the operations on the data must be given by the program . The
combination of theses 2 on an array is called Array ADT

• Some possible operations on array are :
    Display( )
    Add( x ) / Append( x )
    Insert( index , x )
    Delete( index )
    Search( x )
    Get( index )
    Set( index , x )
    Max( ) / Min( )
    Reverse( )
    Shift( ) / Rotate( )

• The representation of array data require 3 thing
    1. Array Space
    2. Size
    3. length( no.of element )

Creating array in stack memory

 int A[10];
 (this is staic)

Creating array in heap memory
 int *p = new int[n];
        or
 int *p = (int *)malloc(n * sizeof(int));
 (this is dynamic)

*/