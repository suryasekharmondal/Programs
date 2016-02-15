#include <stdio.h>
int main(){
	int t;
	long long int i, term3,termlast3,sum;
	scanf("%d", &t);
	while(t--){
		scanf("%lld %lld %lld", &term3,&termlast3, &sum);
		int no_of_terms=(sum*2)/(term3+termlast3);
		printf("%d\n", no_of_terms);
		long long int d=(((sum*2)/no_of_terms)-(2*term3))/(no_of_terms-5);
		for(i=term3-(2*d);i<=termlast3+(2*d);i+=d)
		   printf("%lld ", i);
		   printf("\n");
	}
	return 0;
}
