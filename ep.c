#include <stdio.h>
#include <math.h>
int fact(int num);
int main(){
	double number, sum1, sum, term, term1, loop;
	sum=0.0;
	sum1=0.0;
	printf("Enter the number:\n");
	scanf("%lf", &number);
	for(loop= 1.0; loop<=10.0; loop++){
		term= pow(number, loop)/loop;
		sum+=pow(-1.0,(loop+1.0))*term;

	}
	printf("Log %3lf is %.3lf \n", number+1.0, sum);
	for(loop= 0.0; loop<=10.0; loop++){
		term1= pow(number, loop)/fact(loop);
		sum1+=term1;
	}
	printf("e raised to power %3lf= %.3lf\n", number, sum1);
	return 0;
}
int fact(int num){
	int fac=1;
	while(num>0){
		fac=fac*num;
		num--;
	}
	return fac;
}