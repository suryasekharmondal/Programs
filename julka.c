#include <stdio.h>
int main()
{
	int a[100], x,i=0,j=0;
	int b[100];
	while(scanf("%d", &x))
	{
		printf("\nnumber recieved: %d",x);
		a[i++]=x;
	}
	
	while(scanf("%1d",&x))
	{
		b[j++]=x; 	
	}
	while(i--)
	printf("%d",a[i]);
	while(j--)
	printf("%d",b[j]);
	return 0;
}
