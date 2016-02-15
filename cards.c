#include <stdio.h>
int main(){
	int t; 
	long long int level, sum;
	scanf("%d", &t);
	while(t--){
		sum=0;
		scanf("%lld", &level);
		sum=0.5*level*((3*level)+1);
			printf("%lld\n", sum%1000007);
		
	}
}

