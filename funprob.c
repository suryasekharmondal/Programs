#include <stdio.h>
int main(){
	long long int N,M;
	while(1){
		scanf("%lld %lld",&N, &M);
		if(N==0 && M==0)
		   break;
		if(M<N){
			printf("%.6lf\n",0);
			continue;
		}
		   double p=1/(double)(N+1);
		printf("%.6lf\n", p);
	}
	return 0;
}
