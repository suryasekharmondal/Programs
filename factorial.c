#include <stdio.h>
void factorial(int n)
{
	int res[200];
	res[0]=1;
	int res_size=1;
	int x,i;
	for(x=2;x<=n;x++)
	res_size= multiply(x, res, res_size);
	for(i=res_size-1; i>=0; i--)
    printf("%d", res[i]);
    printf("\n");
}
	int multiply(int x, int res[], int res_size)
	{
		int carry=0,i;
		for(i=0; i<res_size;i++)
		{
			int prod= res[i]*x+carry;
			res[i]=prod%10;
			carry=prod/10;
		}
		while(carry)
		{
			res[res_size]=carry%10;
			carry/=10;
			res_size++;

		}
		return res_size;
	}
	int main()
	{
		int test,n;
		scanf("%d", &test);
		while(test)
		{
			scanf("%d", &n);
		    factorial(n);
		    test--;
		    
		 }
		return 0;
	}
	

