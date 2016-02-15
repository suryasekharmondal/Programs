/*Program to calculate roots*/
#include <stdio.h>
#include <math.h>
#define f(x) x*x-x-6
#define f1(x) sqrt(x+6)
#define f2(x) -sqrt(x+6)
#define f3(x) x*x-6
#define f4(x) 1+6/x
#define h(x) (1/(2*sqrt(x+6)))
#define h1(x) -(1/(2*sqrt(x+6)))
#define h2(x) -6/(x*x)
#define h3(x) 2*x
int main(){
   int i=1;
   double store;
   printf("To solve the equation x^2-x-6=0\n");
   double x0=1.0;
   double term= f1(x0);
   double g=h(x0);
   printf("No. \t\t x \t\t xi \t\t xi-x \t\t g(x) \t\t f(x)\n\n");
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), g, fabs(f(x0)));
   do{
   i++;
      if(fabs(g)<1){
      store=term;
      term=f1(store);
      }
      g=h(store);
         printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), g, fabs(f(term)));
      }
      while(term-store>0.0000001 || term-store<-0.0000001);
      printf("\n\t\tThe value of the root is= %.3lf\n\n", term); 
   x0=-1.0;
   i=1;
   term=f2(x0);
   g=h1(x0);
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), fabs(g), fabs(f(x0)));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=f2(store);
      }
      g=h1(store);
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), fabs(g), fabs(f(term)));
      }
      while(term-store<-0.0000001 || term-store>0.0000001 );
   printf("\n\t\tThe value of the root is= %.3lf\n\n",term); 
   x0=1.0;
   i=1;
   term=f3(x0);
   g=h3(x0);
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), g, fabs(f(x0)));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=f3(store);
      }
      else 
         break;
      g=h3(2*x0);
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), g, fabs(f(term)));
      }
      while(term-store<0.00005);
         printf("\n\t\tValue does not converge\n\n");
         x0=1.0;
   i=1;
   x0=1.0;
   term=f4(x0);
   g=h2(x0);
   printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(x0), fabs(term), fabs(term-x0), g, fabs(f(x0)));
    do{
      i++;
      if(fabs(g)<1){
      store=term;
      term=f4(store);
      }
      else 
         break;
      g=h2(term);
        printf("%d \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf \t\t %.3lf\n", i, fabs(store), fabs(term), fabs(term-store), g, fabs(f(term)));
      }
      while(term-store<0.00005);
         printf("\n\t\tValue does not converge\n\n");  
}