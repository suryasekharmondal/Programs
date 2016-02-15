#include <stdio.h>
#define MAX 20
int main()
{
	int number[MAX],i,j;
	for(i=0; i<MAX;i++)
	{
		scanf("%d", &number[i]);
	}
	for(i=0; i<MAX; i++)
	{
		for(j=0; j<MAX-i; j++)
		{
			if(number[j]>number[j+1])
			{
				int temp= number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	for(i=0; i<MAX; i++)
	{
		printf("%d\n", number[i]);
	}
}
