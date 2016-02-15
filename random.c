#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, count=0;  
	while(1)
	{
		printf("Enter any number between 1,2 and 3:\n");
		scanf("%d", &n);
		if(n==(1+rand()%3)){
			count++;
			printf("RIGHT\n");
		}
		else{
			printf("WRONG\n");
			break;
		}
	}

		
		if(count==10)
			printf("You're a thinker\n");
		else
			printf("Not a thinker\n");
		
}