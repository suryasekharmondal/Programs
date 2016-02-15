#include <stdio.h>
int main()
{
	int A[11];
	int D[11];
	int i,j,a,d,flag;
	while(1)
	{
		flag=1;
	scanf("%d %d", &a, &d);
	if(a==0 && d==0)
	break;
	for(i=0; i<a; i++)
	scanf("%d", &A[i]);
	int min=scanf("%d", &D[0]);
	for(j=1; j<d; j++)
	{
	scanf("%d", &D[j]);
	if(D[j]<min)
	min=D[j];
    }
       for(i=0; i<a;i++)
       {
       	   if(A[i]<=min)
       	   {
       	   printf("Y\n");
       	   break;
           }
       	   else
       	   flag=0;
	       
	   }
	   if(flag==0)
	   printf("N\n");
    }
    return 0;
}