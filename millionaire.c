#include <stdio.h>
#define MAXSIZE 1000
int main(){
	char ques[MAXSIZE], ans[MAXSIZE];
	long long int winning[MAXSIZE+1], max;
	int t, N, count, i;
	scanf("%d", &t);
	while(t--){
		count=0;
		scanf("%d", &N);
		scanf("%s", ques);
		scanf("%s", ans);
		for(i=0;i<N+1;i++)
		   scanf("%lld", &winning[i]);
		for(i=0;i<N;i++){
			if(ques[i]==ans[i]){
				count++;
			}
		}
		if(count<N){
			i=0;
			max=winning[i];
			for(i=1;i<=count;i++){
				if(winning[i]>max)
				   max=winning[i];
			}
			printf("%lld\n", max);
		}
		else{
			printf("%lld\n", winning[N]);
		}
	}
	return 0;
}
