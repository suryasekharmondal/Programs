#include <stdio.h>
#define MOD 1000000007
int main(){
   	int num,i;
   	scanf("%d", &num);
   	long int height[100000]={1},dummy[100000]={1};
   	long long int prod=1;
   	for(i=1;i<=num;i++)
   		scanf("%ld", &height[i]);
   	for(i=num-1;i>=1;i--){
   		if(height[i]<height[i+1]){
   			dummy[i]=height[i+1];
   			prod*=dummy[i]%MOD;
		}
		else if(height[i]>height[i+1] && height[i]<dummy[i+1]){
			dummy[i]=dummy[i+1];
			prod*=dummy[i]%MOD;
		}
		else if(height[i]>height[i+1] && height[i]>dummy[i+1]){
			
		}
	}
	printf("%lld\n",(prod+MOD)%MOD);
	return 0;
}
