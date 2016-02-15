#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) (3*x+sin(x)-pow(2.71828,x))

int main()
{
	
	FILE *fp;
	float r0,r1,r2;
	int i=1;
	fp= fopen("sacant.dat","w");
	printf("Enter initial approximations: ");
	scanf("%f %f",&r0,&r1);
	printf("----------------------------------------------------------------------------------------------------------\n");
    	printf("Iteration	     X0		     X1		  f(X0)	              f(X1)	   X2	         |X1-X0|\n");
    	printf("----------------------------------------------------------------------------------------------------------\n");
	
	do
	{
		r2=(r0*(f(r1))-r1*(f(r0)))/((f(r1))-(f(r0)));
		printf("  %d		  %0.5f	   %0.5f       %0.5f	     %0.5f	 %0.5f	 %0.5f\n",i,r0,r1,(f(r0)),(f(r1)),r2,fabs(r2-r1));
		
		fprintf(fp, "%f %f\n",r0, f(r0));
		fprintf(fp, "%f %f\n\n\n",r1, f(r1));
		fprintf(fp, "%f %d\n",r2, 0);
		fprintf(fp, "%f %d\n\n\n",r2, f(r2));
		r0=r1;
		r1=r2;
		i++;
	}while(fabs(r0-r1)>0.000005);
	printf("----------------------------------------------------------------------------------------------------------\n");
	
	printf("\n\nThe actual root is: %f\n\n",r1);
	fclose(fp);
	return 0;
	
}
	
	
