#include<stdio.h> 
int gcd(int a, int b) { 
if(a==0) return(b);
 return(gcd(b%a, a)); }
  int main() { int i,t; 
  long long int a,b,c; 
  scanf("%d",&t); 
  for(i=0;i<t;i++) {
   scanf("%lld%lld",&a,&b);
    c=gcd(a,b);
	 printf("%lld %lld\n",b/c,a/c); } 
return 0; } 
