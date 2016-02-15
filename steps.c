#include <stdio.h>
int main()
{
  int t,a,b;
  scanf("%d", &t);
  while(t--)
  {
     scanf("%d %d", &a, &b);
     if((a<0 || a>10000) || (b<0 || b>10000))
     break;
     else if(a==0 && b==0)
        printf("0\n");
     else if(a==b) 
	    if(a%2==0)    
        printf("%d\n", a+b);
        else
        printf("%d\n", a+b-1);
     else if(a==b+2)
        {
          if(a%2==0)
          printf("%d\n", a+b);
          else
          printf("%d\n", a+b-1);
        }
     else
     printf("No Number\n");
   }
   return 0;
   }
     

