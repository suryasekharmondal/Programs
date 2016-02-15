#include <stdio.h>
#include <stdlib.h>
int main(){
	int t;
	long long int N, *arr, count, k_track, i;
	scanf("%d", &t);
	while(t--){
		k_track=1;
		scanf("%lld", &N);
		count=N;
		arr= (long long int*)malloc(N*sizeof(long long int));
		for(i=0;i<N;i++)
		   scanf("%lld", &arr[i]);
		i=0;
		while(i<N-1){
			if(arr[i]<=arr[i+1]){
				k_track++;
                count+=(k_track-1);
			}
			else{
				k_track=1;
				i++;
				continue;
			}
		i++;
		}
		printf("%lld\n", count);
	}
	return 0;
}
