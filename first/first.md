First year Contribution are Kept under this repo
sam sergius URK19CS1020

#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("Reverse of the string is \n%s\n", arr);
 
   return 0;
} 
