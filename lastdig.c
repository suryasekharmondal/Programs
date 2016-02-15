#include <stdio.h>
static int s[] = {0,0,0,0,1,1,1,1,6,2,4,8,1,3,9,7,6,4,6,4,5,5,5,5,6,6,6,6,1,7,9,3,6,8,4,2,1,9,1,9};
int main(){
unsigned long long int e,t,n;
scanf("%d", &t);
while(t--){
scanf("%d %llu", &n, &e);
printf("%llu\n", s[((n%10)<<2)+(e&3)]);
}
}

