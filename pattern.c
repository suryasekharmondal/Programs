
/*To print a pattern*/
#include <stdio.h>
#include <math.h>
void main()
{
	int NumberofRows;
	int count1, count2;
	int space, ctr=0;
	printf("Enter the Number of Rows:");
	scanf("%d", &NumberofRows);

	for(count1=NumberofRows; count1>=1; count1-=2)
	{
		printf("\n");
		ctr++;
		for(space=1; space<=ctr; space++)
		{
			printf(" ");

		}
		for(count2=1; count2<=count1; count2++)
		{
			printf("*");
		}
    }
    for(count1=3; count1<=NumberofRows; count1+=2)
    {
    	printf("\n");
    	ctr--;
    	for(space=ctr; space>=1; space--)
    	{
    		printf(" ");
    	}
    	for(count2=1; count2<=count1; count2++)
    	{
    		printf("*");
    	}
    }
}
