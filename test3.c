#include <stdio.h>
#include <math.h>
int main()
{
int n1,n2,n3; double r;
while(1)
{
   scanf("%d %d %d", &n1, &n2, &n3);
   if(n1==0 && n2==0 && n3==0)
   break;
   if((2*n2)==(n1+n3))
   {
    r=n2-n1;
    printf("AP %d\n", n3+r);
   }
   if((pow(n2,2))==(n1*n3))
   {
   	  if(n1>n2 && n2>n1)
   	  {
        r=(double)n2/n1;
        printf("GP %.2lf\n", n3*r);
      }
      r=n2/n1;
      printf("GP %d\n", n3*r);
  }
}
  return 0;
}
   