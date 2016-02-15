/*To find the value of Y at x=5.604 using a 
C program for Lagrange method*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j;
	float sum=0,val,*x,*y,*term,store;
	printf("\nEnter the number of data-points:\n");//to enter the table of values
	scanf("%d",&n);
	/*memory allocation to x, y and term*/
	x=(float*)malloc(n*sizeof(float));
	y=(float*)malloc(n*sizeof(float));
	term=(float*)malloc(n*sizeof(float));
	printf("\nEnter the value of x and y:\n");
	for(i=1;i<=n;i++){
		scanf("%f %f",&x[i], &y[i]);
	}
	printf("\nEnter the value of x to calculate value of y\n");//to enter the value of x at which the value of y is to found
	scanf("%f",&val);
	/*to calculate y(i)=(product)(val-x[j])/(x[i]-x[j]) where j=0,1,2,....n and
	j not equal to i*/
	for(i=1;i<=n;i++){
		store=1;
		for(j=1;j<=n;j++){
			if(i!=j){
				store=store*(val-x[j])/(x[i]-x[j]);
			}
		}
		term[i]=store;
	}
	/*to calculate the value of y by summation of Y[i]*y(i)*/
	for(i=1;i<=n;i++){
		sum=sum+term[i]*y[i];
	}
	printf("\nThe value of y is:%f\n",sum);
}
