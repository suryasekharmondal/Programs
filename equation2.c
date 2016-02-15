/*program to solve equations iteraritively*/
#include<stdio.h>
#include<math.h>
int main(void){
	printf("to solve the equation of e^x-4*x^2=0 in the range (4,5) \n");
	printf("iteno \t x_i \t\t x_(i-1) \t error \t\t functionvalue \n");
	float x0=4.0,x1=1.0,g=0.0;x1=log(4)+2*log(x0);g=2/x0;int c=2,flag=0;
	printf("%d \t%lf \t %lf \t %lf  \t %lf \n",1,x0,x1,(x1-x0),fabs(exp(x0)-4*x0*x0));
	do{
		if(fabs(g)<1){
		x0=x1;
		x1=log(4)+2*log(x0);
		}
		g=2/x0;
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,(x1-x0),fabs(exp(x0)-(4*x0*x0)));
		c++;
	}while((x1-x0)>0.000005);  //to convert to 5 decimal places
	printf("the value of the root is %lf \n",x1);
	printf("\n");
	x0=1.0;x1=1.0;x1=exp(x0)/4*x0;g=(exp(x0)*(x0-1))/4*x0;c=2;flag=0;
	printf("%d \t%lf \t %lf \t %lf \t %lf \n",1,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
	do{
		if(fabs(g)<1){
		x0=x1;
		x1=exp(x0)/4*x0;
		}
		else{
			flag=1;
			break;
		}
		g=(exp(x0)*(x0-1))/4*x0;
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
		c++;
		
	}while(x1-x0<-0.000005 || (x1-x0)>0.000005);
	if(flag)
		printf("value does not converge \n");
	else if(x0<5 && x0>=4)
		printf("the value of the root is %lf \n",x1);
	else
		printf("the value does not lie in the range \n");
	printf("\n");
	x0=1.0,x1=1.0,g=0.0;x1=sqrt(exp(x0))/2;g=1/4*sqrt(exp(x0));c=2;flag=0;
	printf("%d \t%lf \t %lf \t %lf  \t %lf \n",1,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
	do{
		if(fabs(g)<1){
		x0=x1;
		x1=sqrt(exp(x0))/2;
		}
		else{
			flag=0;
			break;
		}
		g=1/4*sqrt(exp(x0));
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
		c++;
	}while((x1-x0)>0.000005 || (x1-x0)<-0.000005);
	if(flag)
		printf("value does not converge \n");	
	else if(x0<5 && x0>=4)
		printf("the value of the root is %lf \n",x1);
	else
		printf("the value does not lie in the range \n");
	printf("\n");
	x0=1.0,x1=1.0,g=0.0;x1=-sqrt(exp(x0))/2;g=-1/4*sqrt(exp(x0));c=2;flag=0;
	printf("%d \t%lf \t %lf \t %lf  \t %lf \n",1,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
	do{
		if(fabs(g)<1){
		x0=x1;
		x1=-sqrt(exp(x0))/2;
		}
		else{
			flag=1;
			break;
		}
		g=-1/4*sqrt(exp(x0));
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,fabs(x1-x0),fabs(exp(x0)-4*x0*x0));
		c++;
	}while((x1-x0)>0.000005 || x1-x0<-0.000005);
	if(flag)
		 printf("value does not converge \n");	
	else if(x0<5 && x0>=4)
		printf("the value of the root is %lf \n",x1);
	else
		printf("the value does not lie in the range \n");
	printf("\n");
	return 0;
}

