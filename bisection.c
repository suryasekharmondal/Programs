#include <stdio.h>
#include <math.h>
#define f(x) (x*sin(x)+cos(x))
int main(){
   double a,b,m;
   int flag=0;
   printf("Enter the range in which the function root is to be found: ");
   scanf("%lf %lf", &a, &b);
   while(f(a)*f(b)>0){
       printf("Enter the range again: ");
       scanf("%lf %lf", &a, &b);
   }
   m=(a+b)/2;
   printf("a \t\t f(a) \t\t b \t\t f(b) \t\t m \t\t f(m) \n");
   do{
     printf("%lf \t %lf \t %lf \t %lf \t %lf \t%lf \n",a,f(a),b,f(b),m,fabs(f(m)));
     if(f(m)==0){
        flag=1;
        break;
     }
     if(f(m)*f(a)>0)
        a=m;
     else
        b=m;
     m=(a+b)/2;
     }while(fabs(a-b)>0.0001);
         printf("root is= %.3lf\n", m);
     return 0;
 }

