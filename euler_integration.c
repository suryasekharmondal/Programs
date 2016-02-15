#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define E 2.71828183
float slope(float x,float y){
	return(2*(x*x+y));
}
float actualvaluecal(float x){
	return(1.5*pow(E,-2*x)-x*x-x-0.5);
}
int main(void){
	float h,x,oldy,newy,error;
	printf("\nenter step-length\n");
	scanf("%f",&h);
	printf("\nenter initial x and initial y\n");
	fflush(stdin);
	scanf("%f%f",&x,&newy);
	error=h*h/2;
	do{
		oldy=newy;
		newy=oldy+h*slope(x,oldy);
		printf("%f\t%f\t%f\t%f\n",x,newy,actualvaluecal(x),error);
		error=error*(1+h*(slope(x+h,newy)-slope(x,oldy))/h);
		x=x+h;
	}while(error>=0.005&&x<=1);
	return(0);
}

