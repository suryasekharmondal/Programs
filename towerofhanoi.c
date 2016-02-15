#include <stdio.h>
#include <math.h>
unsigned long long int count=1;
int main(){
	int t,i,num;
	scanf("%d", &t);
	while(t--){
		count=1;
		scanf("%d", &num);
		for(i=1;i<=num;i++){
			count*=3;
		}
		printf("%llu\n",count-1);
	}
	return 0;
}

