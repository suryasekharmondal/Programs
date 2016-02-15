#include <stdio.h>
#define ull unsigned long long int
ull p;
ull fact(ull a){
	ull factorial=1,j;
	for(j=1;j<=a;j++)
	   factorial*=j;
	return factorial;
}
int main(){
	int t;
	ull N,K,i;
	ull r, total_ways;
	scanf("%d", &t);
	while(t--){
		scanf("%llu %llu %llu", &N, &K, &p);
		total_ways=fact(N+1)/(fact(K+1)*fact(N-K));	
		printf("%llu\n",total_ways%p);
	}
	return 0;
}
