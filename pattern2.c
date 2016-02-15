#include <stdio.h>
#include <math.h>
void main()
{
	int number, count, space,i; char ch;
	
	printf("Enter the number of rows you want to be displayed\n");
	scanf("%d", &number);
	for(count=1; count<=number; count++)
	{
		ch='A';
		for(space=count;space<number; space++)
		{
			printf(" ");
		}
		for(i=count; i>=1; i--)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
}