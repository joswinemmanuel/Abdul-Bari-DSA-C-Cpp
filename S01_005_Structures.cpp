/*

 Collection of data members under one name is structure

• Data members can be of similar type or non similar type
• When structures is called in the main() program then it will consume
space accordingly to the data members types it contains in the memory

An example of structure is a program of a rectangle
struct Rectangle {
    int length;
    int breath;
}

int main() {
    // struct Rectangle r ; 	 	 	 - Declaration
    struct Rectangle r = {10, 5};  - Declaration + Initialisation
        
    r.length = 15 ;	 	 	 	 - . is used to access a member
    r.breath = 10 ;
    printf("Area of rectangle is %d" , r.length*r.breath); - Accessing the
    members
}

Use of structures :
 Structures is used to combine data under one name, thus some example
usage of structures is

• In Complex numbers
• In student details
• In Employee Details
• Bank Details etc
• Defining Shapes etc…

*/