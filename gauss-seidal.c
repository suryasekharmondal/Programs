/* Program to calculate the gauss-seidel equation for the following matrix
3 -0.1 -0.2 | 7.85
0.1 7 -0.3  | -19.3
0.3 -0.2 10 | 71.4
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int count=0;

void no_of_iterations(float a[],int n){ //function to show the number of iterations and display the solution matrix at the preceding 
	int i;                              //steps to convergence
	count++;
	printf("Iteration no.s and the steps to reaching the solution:%d\n",count);
	for(i=1;i<=n;i++){
		printf("%f\n",a[i]);
	}
	printf("\n\n");
}
int convergence(float temp[],float x[],int n){  //function to check the convergence 
	int flag=0,i;
	for(i=1;i<=n;i++){
		if(fabs(temp[i]-x[i])>=0.000001){
			flag=1;
			break;
		}
	}
	return(flag);
}
int main(void){
	int n,i,j,flag;
	float **a,*b,*x,sum,*temp;
	printf("\nEnter the no. of equations\n");
	scanf("%d",&n);
	
	//memory allocation to enter the number of equations
	
	a=(float**)malloc(n*sizeof(float*));
	for(i=1;i<=n;i++){
		a[i]=(float*)malloc(n*sizeof(float));
	}
	b=(float*)malloc(n*sizeof(float));
	x=(float*)malloc(n*sizeof(float));
	temp=(float*)malloc(n*sizeof(float));
	printf("\nenter the coefficient matrix\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nenter the right-hand-side matrix\n");
	for(i=1;i<=n;i++){
		scanf("%f",&b[i]);
	}
	for(i=1;i<=n;i++){
		x[i]=0;
	}
	do{
		for(i=1;i<=n;i++){
			temp[i]=x[i];
		}
		no_of_iterations(temp,n);
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=n;j++){
			if(i!=j){
				sum+=a[i][j]*x[j];
			}
		}
		x[i]=(b[i]-sum)/a[i][i];
	}
	flag=check(temp,x,n);
	}while(flag==1);
	printf("\nYour solution is:\n");
	for(i=1;i<=n;i++){
		printf("%f\n",x[i]);
	}
}
