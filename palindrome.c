/*To check whether a number is palindrome or not*/
#include <stdio.h>
#include <math.h>
void main()
{
	int number, digit, rev=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	int store=number;
	while(number!=0)
	{
		digit=number%10;
		rev=rev*10+digit;
		number=number/10;
	}
	   if(rev==store)
	   {
	   	  printf("The number is a palindrome number\n");
	   }
	   else
	   {
	   	  printf("The number is not a palindrome number\n");
	   }
}