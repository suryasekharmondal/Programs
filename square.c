#include <stdio.h>
int main()
{
   int n;
   while(1)
   {
     scanf("%d", &n);
     if(n<1 || n>100)
     break;
     if(n==0)
     break;
     int sqr= (n*(n+1)*(2*n+1))/6;
     printf("%d\n", sqr);
   }
   return 0;
}
