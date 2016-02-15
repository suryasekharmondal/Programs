#include <stdio.h>
#include <math.h>
void main()
{
	int number, loop_var, loop_var2, loop_var3, count, space;
	char ch;
	printf("Enter the number the rows you want to be displayed: \n");
	scanf("%d", &number);
	count=number+1;
	for(loop_var=1; loop_var<=number; loop_var++)
	{
		ch='A';
		
		for(loop_var2=number; loop_var2>=loop_var; loop_var2--)
		{
			printf("%c",ch);
			ch++;
		}
		for(space=number; space>count; space--)
		{
			printf(" ");
			
		}

		for(loop_var3=number; loop_var3>loop_var; loop_var3--)
	
			ch--;
            printf("%c", ch);
		}
		printf("\n");
		count-=2;
	}
}