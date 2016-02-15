#include <stdio.h>
#define PI 3.14159
int ch, i,j;
float num, term, sum, rad;
int fact(int a){
	if(a==1)
	   return 1;
	return a*fact(a-1);
}
float power(float a, int b){
	float p=1.0;
	for(j=1;j<=b;j++)
	   p*=a;
	return p;
}
int main(){
	while(1){
	printf("1) Sine series\n2) Cosine series\n3) Exponential series\n4)1/1-x series for |x|<1\n5)Exit\nEnter your choice: ");
	scanf("%d", &ch);
	switch(ch){
		case 1: printf("Enter the number in degrees: ");
		        scanf("%f", &num);
		        rad= (PI*num)/180.0;
		        sum=0;
		        for(i=0;i<=5;i++){
		        	term= (power(-1,i+2)*power(rad, 2*i+1))/fact(2*i+1);
		        	sum+=term;
				}
				printf("Sine value= %.5f\n\n", sum);
				break;
	    case 2:printf("Enter the number in degrees: ");
		        scanf("%f", &num);
		        rad= (PI*num)/180.0;
		        sum=1.0;
		        for(i=1;i<=5;i++){
		        	term= (power(-1,i)*power(rad, 2*i))/fact(2*i);
		        	sum+=term;
				}
				printf("Sine value= %.5f\n\n", sum);
				break;
		case 3:printf("Enter the number: ");
		        scanf("%f", &num);
		        sum=1.0;
		        for(i=1;i<=5;i++){
		        	term= power(num,i)/fact(i);
		        	sum+=term;
				}
				printf("Exponential value= %.5f\n\n", sum);
				break;
		case 4:printf("Enter the number in the range -1<x<1: ");
		        scanf("%f", &num);
		        sum=1.0;
		        for(i=1;i<=25;i++){
		        	term= power(num,i);
		        	sum+=term;
				}
				printf("Value= %.5f\n\n", sum);
				break;
		case 5: return 0;
		        break;
		default: printf("Wrong choice");
	}
}
	return 0;
}
