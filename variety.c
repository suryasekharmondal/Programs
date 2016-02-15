 /*To find the largest, smallest, mean and standard deviation of 10 numbers*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int number, max, min, i, store=0; float mean, calc;
	printf("Enter 10 numbers\n");
	scanf("%d", &number);
	max=number;
	min=number;
	calc=number;
	for(i=1;i<=9;i++)
	{ 
		scanf("%d", &number);
		if(max<number)
		{
			max=number;
		}
		if(min>number)
		{
			min=number;
		}
		calc+=number;
		store=(store+number*number);// formula for standard deviation (summation x^2/n)-mean^2

	}

	printf("The maximum number is %d\n", max);
	printf("The minimum number is %d\n", min);
	printf("The mean of the numbers is %.2f\n", calc/10);
	mean=calc/10;
	printf("The standard deviation of the numbers is %.2f\n", sqrt(store/10-(mean*mean)));
		
	
}
