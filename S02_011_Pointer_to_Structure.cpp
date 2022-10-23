/*

Syntax - 1
- When variable is already existing , the we can use pointer to structure like

Struct Rectangle {
    int length;
    int breath;
} 

Int main( ) {
    Struct Rectangle r = { 10, 5 };
    Struct Rectangle *p = &r;
        
    r.length = 15 ;	 	 	 	
    P-> length = 20 ;
    Or
    (*p).length = 20 ; 
}

Syntax - 2
- Dynamically object created in heap and pointer pointing there

Struct Rectangle {
    int length;
    int breath;
}; 

Int main( ) {
    Struct Rectangle *p;
    (Struct rectangle * ) malloc (sizeof (struct rectangle));
    P -> length = 10 ;
    P -> breath = 5;
}

*/
