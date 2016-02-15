#include <stdio.h>
#include <math.h>
int main(){
	int t; double d;
	scanf("%d", &t);
	while(t--){
		scanf("%lf", &d);
		if(d==0){
		   printf("0\n");
		   continue;
	}
		printf("%.6lf\n", 1-1/(3*sqrt(d/2)));
	}
	return 0;
}
