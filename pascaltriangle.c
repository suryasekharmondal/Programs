/*To print Pascal's triangle*/
#include <stdio.h>
#include <math.h>

int factorial(int num)
{
	int temp;
	long result=1;
	for(temp=1; temp<=num;temp++)
		result=result*temp;
	return result;
}
void main()
{
	int i, NumberofRows, counter;
	printf("Enter the number of rows you want to see in Pascal's triangle:\n");
	scanf("%d", &NumberofRows);
	for(i=0; i<NumberofRows; i++)
	{
		for(counter=0; counter<=(NumberofRows-i-2); counter++)
		{
			printf(" ");
		}
		for(counter=0; counter<=i; counter++)
		{
			printf("%ld", factorial(i)/(factorial(counter)*factorial(i-counter)));
		}
		printf("\n");
	}
}
