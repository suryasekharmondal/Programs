#include <stdio.h>
#define MOD 100007
unsigned long long int factorial(int a){
	unsigned long long int fact=1,i;
	for(i=1;i<=a;i++)
	   fact=(fact*i)%MOD;
	return fact%MOD;
}
int main(){
	int t;
	unsigned long long int no_of_triangles,a,b,n;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		b=((factorial(n-2)%MOD)*((factorial(n-1))%MOD))%MOD;
		printf("b = %llu\n", b);
		a=factorial(2*(n-2));
		printf("a= %llu\n", a);
		no_of_triangles=(a/b)%MOD;
		printf("%lld\n", no_of_triangles);
	}
	return 0;
}
