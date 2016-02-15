#include <stdio.h>
int main(){
unsigned long long int b,t,a,o;scanf("%llu", &t);
while(t--){scanf("%llu %llu", &a, &b);o=1;
while(b>0){if(b%2!=0){o*=a%10;b-=1;}b/=2;a*=a%10;}printf("%llu\n",o);}}
