/*Program to calculate roots*/
#include <stdio.h>
#include <math.h>
int main(){
   int i=1;
   double store;
   printf("To solve the equation x^2-x-6=0\n\n\n");
   double x0=1.0;
   double term=sqrt(x0+6.0);
   double g=(1/(2*sqrt(x0+6)));
   printf("No. \t\t x \t\t xi \t\t xi-x \t\t g(x) \t\t f(x)\n\n");
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), fabs(g), fabs(x0*x0-x0-6));
   do{
   i++;
      if(fabs(g)<1){
      store=term;
      term=sqrt(store+6.0);
      }
      g=(1/(2*sqrt(store+6.0)));
         printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), fabs(g), fabs(term*term-term-6));
      }
      while(term-store>0.0000001 || term-store<-0.0000001);
      printf("\n\t\tThe value of the root is= %.3lf\n\n\n", term); 
   x0=-1.0;
   i=1;
   term=-sqrt(x0+6.0);
   g=-(1/(2*sqrt(x0+6)));
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), fabs(g), fabs(x0*x0-x0-6));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=-sqrt(store+6.0);
      }
      g=-(1/(2*sqrt(store+6.0)));
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), fabs(g), fabs(term*term-term-6));
      }
      while(term-store<-0.0000001 || term-store>0.0000001 );
   printf("\n\t\tThe value of the root is= %.3lf\n\n\n",term); 
   x0=1.0;
   i=1;
   term=(x0*x0)-6;
   g=2*x0;
   printf("%d \t\t %.3lf \t\t%.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), fabs(g), fabs(x0*x0-x0-6));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=store*store-6;
      }
      else 
         break;
      g=2*x0;
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), fabs(g), fabs(term*term-term-6));
      }
      while(term-store<0.00005);
         printf("\n\t\tValue does not converge\n\n");
         x0=1.0;
   i=1;
   x0=1.0;
   term=1/(6+x0);
   g=-6/(term*term);
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), fabs(g), fabs(x0*x0-x0-6));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=store*store-6;
      }
      else 
         break;
      g=-6/(term*term);
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), fabs(g), fabs(term*term-term-6));
      }
      while(term-store<0.00005);
         printf("\n\t\tValue does not converge\n\n");  
}