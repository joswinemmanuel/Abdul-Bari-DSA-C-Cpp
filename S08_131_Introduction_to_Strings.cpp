/*

ASCII codes
American Standard Code for Information Interchange
Code for every English Alphabets or letter or characters and numbers and symbols
A - 65, Z - 90
a - 97, z - 123
0 - 48, 9 - 57
Enter - 10
Spacebar - 13
Esc - 27
ASCII codes start from 0 and ends at 127
7 bits are required

Unicodes

char temp;    // 1 byte of memory
temp = 'A';
printf("%c", temp);  // gives A
printf("%d", temp);  // gives 65
cout << temp;           // gives A

char X[5];
char X[5] = {'A', 'B', 'C', 'D', 'E'};
char X[] = {'A', 'B', 'C', 'D', 'E'};  // will also work
char X[] = {65, 66, 67, 68, 69};       // will give same result
// '\0' is the end of a string, delimeter, Null character, String terminator

char name[10] = {'J', 'O', 'S', 'W', 'I', 'N', '\0'};
char name[] = {'J', 'O', 'S', 'W', 'I', 'N', '\0'};
char name[] = "JOSWIN";
printf("%s", name);     // gives JOSWIN
scanf("%s", name);      // get data till space or enter
gets(name)              // get data till enter is provied

*/