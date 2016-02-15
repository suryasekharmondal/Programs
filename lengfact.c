#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(){
	int t;
	double num;
	scanf("%d", &t);
	while(t--){
		scanf("%lf",&num);
		if(num==1 || num==0){
			printf("1\n");
			continue;
		}
		printf("%.0lf\n", ceil((log(2*PI)+log(num)*(1+2*num)-2*num)/(log(10.0)*2)));
	}
	return 0;
}
