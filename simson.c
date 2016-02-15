/*To find the value of integral using Simson's*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (1/(1+x))
int main(){
	int n,i,count;
	float j,*x,*y,h,a,b,newY,oldY,sum;
	n=1;
	printf("\nEnter lower and upper limit of integration\n");
	scanf("%f %f",&a, &b);
	newY=0;
	do{
		oldY=newY;
		x=(float*)malloc((pow(2,n)+1)*sizeof(float));
		y=(float*)malloc((pow(2,n)+1)*sizeof(float));
		h=(b-a)/pow(2,n);
		j=a;
		i=0;
		while(j<=b){
			x[i]=j;
			y[i]=f(x[i]);
			j=j+h;
			i++;
		}
		sum=0;
		for(count=1;count<=pow(2,n)-1;count+=2){
			sum=sum+y[count-1]+4*y[count]+y[count+1];
		}
		newY=h*sum/3;
		printf("%f\t%f\n",oldY,newY);
		n++;
	}while(fabs(oldY-newY)>=0.00005);
	printf("\nanswer is:%f\n",newY);
}
