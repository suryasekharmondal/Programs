  /*To reverse a number*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int number, digit, rev=0;
	printf("Enter the number to be reversed\n");
	scanf("%d", &number);
	while(number!=0)
	{
		digit=number%10;
		rev=rev*10+digit;
		number=number/10;
    }
printf("The reversed number is %d\n", rev);
}    
