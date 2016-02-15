/*program to solve equations iteraritively*/
#include<stdio.h>
#include<math.h>
int main(void){
    printf("to solve the equation of x^2-x-6=0 \n");
	float x0=1.0,x1=1.0,g=0.0;
    x1=sqrt(x0+6);
    g=(1/(2*sqrt(x0+6)));
	int c=2;			
	printf("the function x=(x+6)^0.5 \n");
	printf("iteno \t x_i \t\t x_(i-1) \t error \t\t functionvalue \n"); 
	printf("%d \t%lf \t %lf \t %lf \t %lf \n",1,x0,x1,(x1-x0),fabs(x0*x0-x0-6));

	/*checking solutions for all combinations of x=g(x)*/
	
            do{
		
                if(fabs(g)<1){        	//checking if the derivative is less than 1 for convergence
			    x0=x1;
		        x1=sqrt(x0+6);
		
            }
		    g=1/(2*sqrt(x0+6));

		/*printing the desired table*/
            printf("%d \t%lf \t %lf \t %lf  \t %lf\n",c,x0,x1,(x1-x0),fabs(x0*x0-x0-6));
	        c++;
	
           }
            while((x1-x0)>0.000005);  //to convert to 5 decimal places
	         printf("the value of the root is %lf \n",x1);
	         printf("\n");
	
      x0=0.0;
      x1=1.0;
      x1=-sqrt(x0+6);
      g=-(1/(2*sqrt(x0+6)));
      c=2;
	   printf("for the function x=-(x+6)^0.5 \n");
	   printf("%d \t%lf \t %lf \t %lf \t %lf \n",1,x0,x1,(x1-x0),fabs(x0*x0-x0-6));
	  do{
		if(fabs(g)){
			x0=x1;
			x1=-sqrt(x0+6);
		}
		g=-1/(2*sqrt(x0+6));
		printf("%d \t%lf \t %lf \t %lf \t %lf  \n",c,x0,x1,fabs(x1-x0),fabs(x0*x0-x0-6));
		c++;
	 }
        while(x1-x0<-0.0000001 || (x1-x0)>0.0000001);
	
        printf("the value of the root is %lf \n",x1);
        printf("\n");
     x0=1.0,x1=1.0,g=0.0;
     x1=(x0*x0)-6;
     g=2*x0;
	printf("for the function x=x*x-6 \n");
	printf("%d \t%lf \t %lf \t %lf \t %lf \n",1,x0,x1,(x1-x0),fabs(x0*x0-x0-6));
	
    do{
		if(fabs(g)<1){
			x0=x1;
			x1=(x0*x0)-6;
		}
		else
			break;
		g=2*x0;
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,fabs(x1-x0),fabs(x0*x0-x0-6));
	}
   while((x1-x0)>0.000005); 
	
    printf("value does not converge \n");
	printf("\n");
	
    x0=1.0,x1=1.0,g=0.0;
    x1=1+(6/x0);
    g=-6/(x0*x0);
	printf("for the function x=1+(6/x) \n");
	printf("%d \t%lf \t %lf \t %lf \t %lf \n",1,x0,x1,(x1-x0),fabs(x0*x0-x0-6));
	do{
		if(fabs(g)<1){
			x0=x1;
			x1=1+(6/x0);
		}
		else
			break;
		g=-6/(x0*x0);
		printf("%d \t%lf \t %lf \t %lf \t %lf \n",c,x0,x1,(x1-x0),fabs(x0*x0-x0-6));
	}
    while((x1-x0)>0.000005); 
	printf("value does not converge \n");
	return 0;

}                                                         //main function ends
