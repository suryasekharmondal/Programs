#include <stdio.h>
#include <stdlib.h>
long long int pos,i;
long long int max(long long int a,long long int b){
	if(a>b){
	   pos=i;
	   return a;	
	}
	else
	   return b;
}
int main(){
	long long int N, P, X, max1=0;
	long long int *A;
	scanf("%lld %lld %lld",&N, &P, &X);
	A=malloc(sizeof(long long int)*N);
	for(i=1;i<=N;i++)
	   scanf("%lld",&A[i]);
	for(i=1;i<=N;i++){
		max1=max(P*A[i], max1);
		P-=X;
	}
	printf("%lld\n",pos);
	return 0;
}
