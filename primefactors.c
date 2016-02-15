/*To find the prime factors of a number*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
   int number, count, flag, i;
   printf("Enter the number whose prime factors you want to find\n");
   scanf("%d", &number);
   printf("The prime factors of a number are\n");
   for(count=2; count<=number; count++)
   {
   	flag=0;
   	   if(number%count==0) //checkin if number is divided by count
   	   {
   	   	   for(i=2; i<count;i++) //loop to check if count which divides number is prime
   	   	   {
   	   	   	   if(count%i==0)
   	   	   	   {
   	   	   	   	   flag=1;
   	   	   	   	   break;

   	   	   	   }
   	   	   }
   	   	   if(flag==0)
   	   	   {
   	   	   	printf("%d\t", count);
   	   	   }
   	   }
   }	
}