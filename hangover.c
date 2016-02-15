#include <stdio.h>
int main()
{
	int i,j; double c,sum=0.00;
	
	
		float a[275];
		for(j=0;j<275;j++)
		{
			a[j]=1.00/(j+2.00);
		}
		while(1)
		{
		
	    	sum=0.00;
	     scanf("%lf", &c);
	     if(c==0.00)
	     break;
	      for(i=0; i<275; i++)
	     {
	     
		   sum= sum+a[i];
		   if(sum>=c)
		   break;
	     }
	printf("%d card(s)\n", i+1);
    }
   return 0;
}
