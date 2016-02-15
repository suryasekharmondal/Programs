#include <stdio.h>
 long int gcd( long int, long int);
int main(){
	int t;
	long int A,B;
	scanf("%d", &t);
	printf("\n");
	while(t--){
		scanf("%ld  %ld", &A, &B);
		long int res=gcd(A,B);
		long int lcm=(A*B)/res;
		printf("%ld %ld\n", lcm/A, lcm/B);
   }
   return 0;
}
 long int gcd(long int a,long int b){
	if(a>b)
	   return gcd(a-b,b);
	else if(b>a)
	   return gcd(a,b-a);
	else
	   return a;
}

