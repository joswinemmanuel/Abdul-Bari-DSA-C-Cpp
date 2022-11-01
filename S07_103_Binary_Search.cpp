/*

        Binary Search  // O(log(n))

• The condition for binary search is that the list of elements
must be sorted
• The binary search will always search the element in the middle of the
list and split it into 2 parts
• For performing binary search we need 3 index that is lower , higher ,
middle value

	 	 	 mid = [ l + h / 2 ]
• Low will point at initial value that is index 0
• high will point at the end of the list
• Mid will point the the centre most value in a list        
• If the number we are searching is greater than key element it will
search the value o left hand side and if the value is lower than the key
it will check in right hand side
• Once the value we want is know the list is divides again to check the
element in that half
• Once again the same procedure is repeated
• The list value is getting reduced and every time it is getting divided by 2
• When the same steps is performed again all the values ( low , high , mid )
will point to the same number which will be the search value.
• Hence the search is successful 
• When low became greater than high we stop the process it indicated that
the element is not present in the list thus the search is unsuccessful 

*/