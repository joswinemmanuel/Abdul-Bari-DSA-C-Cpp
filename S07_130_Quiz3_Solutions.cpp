/*

Question 1:
suppose  you  are  given  an  array  s[1….n] and a 
procedure reverse ( s, I , j ) which  reverse  the  order of  elements  in  between position  I  and j (both inclusive). 
what  does  the  following  the  sequence do,  where  1 ≤ k ≤  n:
        reverse  (s,1,k) ; 
        reverse (s,k+1,n) ; 
        reverse (s, 1, n) ; 

ANS) rotates s left by k position

Question 2:
A program  p  reads  in  500 integers   in  the  range 
(0,100) representing  the   scores  of  500  students .
if prints  the   frequency  of  each  score   above  50,  what  would  be  the  best  way  for  p to  store  the  
frequencies ?

ANS) an array of 50 numbers

Question 3:
Let  a be  array  containing   n  integers  in   increasing  order.  The  following  algarithm  determines  whether 
there are two  distinct  numbers in   the array  whose  difference  is  a  specified  numbers  s > 0.
i = 0; j=1; 
while  (j < n) { 
    if  (E)  j++; 
    else  if  (a[j] –a[i]= = s) break; 
    else i++; 
}
If  (j < n ) printf  (“yes”) 

ANS) a[j]-a[i] < s

Question 4:
What is the time taken to find any element from an Array of elements, which is neither maximum nor minimum.

ANS) O(1)

Question 5:
what is the time taken to find the second largest element in a Array

ANS) O(n)

*/