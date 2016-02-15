#include <stdio.h>
int main(){
	int t;
	unsigned long long int no_of_children, no_of_candies, sum,store;
	scanf("%d", &t);
	printf("\n");
	while(t--){
		scanf("%llu", &no_of_children);
		sum=0;
		store=no_of_children;
		while(no_of_children--){
			scanf("%lld", &no_of_candies);
			sum+=no_of_candies%store;
		}
		if(sum%store==0)
		   printf("YES\n\n");
		else
		   printf("NO\n\n");
	}
	return 0;
}
