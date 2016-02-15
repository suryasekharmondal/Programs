#include <stdio.h>
int main(){
	long int t,num;
	int sum;
	scanf("%ld\n", &t);
	while(t--){
		scanf("%ld", &num);
		sum=0;
		while(num!=0){
			sum=sum+(num/5);
			num=num/5;
		}
		printf("%d\n", sum);
	}
	return 0;
}
