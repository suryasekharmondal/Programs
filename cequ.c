#include<stdio.h> 
int gcd(long int a,long int b) { 
if(a==0) return(b);
 return(gcd(b%a, a)); }
  int main() { int i,t; 
  long long int a,b,c; 
  scanf("%lld",&t); 
  for(i=0;i<t;i++) {
   scanf("%lld %lld %lld",&a,&b, &c);
    if(c%gcd(a,b)==0)
	   printf("Case %d: Yes\n",i+1);
	 else
	   printf("Case %d: No\n",i+1); } 
return 0; } 
