/*To convert decimal to binary or vice versa*/
#include <stdio.h>
#include <math.h>
void main()
{
	int choice, nc=0, store, digit, bin, dec;
	printf("1) To convert a number from decimal to binary\n2) To convert a number from binary to decimal\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1: printf("Enter a decimal number: \n");
		        scanf("%d", &dec);
		        store= dec; bin=0;
		       
		        while(store!=0)
		        {
		        	digit= store%2;
		        	bin= bin + digit*pow(10,nc++);
		        	store=store/2;
		        	


		        }
		        printf("The binary number is %d\n", bin);
		        break;
		case 2: printf("Enter a binary number: ");
		        scanf("%d", &bin);
		        store= bin;  dec=0;
		        do
		        {
		        	digit=bin%10;
		        	dec=dec+ digit*pow(2,nc);
		        	nc++;
		        	bin=bin/10;

		        }while(bin!=0);
		        printf("The decimal number is %d\n", dec);
		        break;
		default: printf("Invalid choice");      

	}

}
