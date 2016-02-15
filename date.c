/*To accept a six digit number and print it in date format*/
#include <stdio.h>
#include <math.h>
void main()
{
	int dd, yy, rem1, rem2;
	long number, quo1, quo2;
	printf("Enter the six digit number:\n");
	scanf("%d", &number);
	rem1= number%100;
	yy= rem1+2000;
	quo1= number/100;
	rem2= quo1%100;
	dd= quo1/100;
	if(rem2>12)
	{
		printf("Wrong input!\n");
	}
	switch(rem2)
	{
		case 1: printf("Number in date format: %d January %d", dd, yy);
		        break;
		case 2: printf("Number in date format: %d February %d", dd, yy);
		        break;
		case 3: printf("Number in date format: %d March %d", dd, yy);
		        break;
		case 4: printf("Number in date format: %d April %d", dd, yy);
		        break;
		case 5: printf("Number in date format: %d May %d", dd, yy);
		        break;
		case 6: printf("Number in date format: %d June %d", dd, yy);
		        break;
		case 7: printf("Number in date format: %d July %d", dd, yy);
		        break;
		case 8: printf("Number in date format: %d August %d", dd, yy);
		        break;
		case 9: printf("Number in date format: %d September %d", dd, yy);
		        break;
		case 10: printf("Number in date format: %d October %d", dd, yy);
		        break;
		case 11: printf("Number in date format: %d November %d", dd, yy);
		        break;
		case 12: printf("Number in date format: %d December %d", dd, yy);
		        break;
	}
}
