#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int *cache, dollars=0;
long long int change_to_dollars(long int num){
	if(num==0)  return 0;
	
	else if(cache[num]!=-1)   return cache[num];
	

	dollars=change_to_dollars(floor(num/2))+change_to_dollars(floor(num/3))+change_to_dollars(floor(num/4));
	
	if(dollars>num)  cache[num]=dollars;
	else cache[num]=num;
	return cache[num];
}
int main(){
	long long int N, i;
	while(1){
		scanf("%lld", &N);
		cache= malloc(N*sizeof(long long int));
		for(i=0;i<=N;i++)  cache[i]=-1;
		printf("%lld\n", change_to_dollars(N));
	}
	return 0;
}
