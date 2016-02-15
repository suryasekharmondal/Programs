#include <stdio.h>
#include <math.h>
int main(){
	int t;
	double s, quadarea;
	double a,b,c,d;
	scanf("%d", &t);
	while(t--){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		s=(a+b+c+d)/2;
		quadarea= sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n", quadarea);
	}
	return 0;
}
