/*To find the gcd of 2 numbers*/
#include <stdio.h>
#include <math.h>
int minimum(int a1, int a2) //to find the minimum of two numbers
{
  int min=a1;
  if(a2<min)
  {
    min=a2;
  }
  return min;
}
int maximum(int a3, int a4) //to find the maximum of two numbers
{
  int max=a3;
  if(a4>max)
  {
    max=a4;
  }
  return max;
}
void main()
{
  int store1, store2, loop_var,i, flag, count1, count2,  gcd=1;
  long int num1, num2;
  printf("Enter two numbers:\n");
  scanf("%d %d", &num1, &num2);
  store1= minimum(num1,num2);
  store2= maximum(num1, num2);
  for(loop_var=2; loop_var<=store1; loop_var++)
   {
    flag=0;
    count1=0;
    count2=0;
       if(store1%loop_var==0) //checkin if number is divided by count
       {
           for(i=2; i<loop_var;i++) //loop to check if count which divides number is prime
           {
               if(loop_var%i==0)
               {
                   flag=1;
                   break;

               }
           }
           if(flag==0)
           {
               while(store1%loop_var==0)
               {

                  count1++;
                  store1= store1/loop_var;
               }
               while(store2%loop_var==0)
               {
                  count2++;
                  store2= store2/loop_var;
               }
               if(count1<count2)
               {
                   gcd= gcd * pow(loop_var, count1);
               }
               if(count1>count2)
               {
                   gcd= gcd * pow(loop_var, count2);
               }
               if(count1==count2)
               {
                   gcd= gcd * pow(loop_var, count1);
               }
          }
      }
  }
    printf("The gcd of the 2 numbers is %d\n", gcd);
  }