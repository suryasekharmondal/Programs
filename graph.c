/*sine curve*/
#include <stdio.h>
#include <math.h>
void main()
{
	int i,j;
	for(j=39;j>=0;j--)
	{
		for(i=0;i<=180;i+=5)
		{
			if((int)(40*sin(i*3.14/180))==j)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
	for(j=-1;j>=-40;j--)
	{
		for(i=0;i<=180;i+=5)
		{
			printf(" ");

		}
		for(i=180; i<=360;i+=5)
		{
			if((int)(40*sin(i*3.14/180))==j)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
	
}