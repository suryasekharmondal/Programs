#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[30], arr2[30];
	int sum[31];
	int carry=0;
    int i; 
	printf("Enter the first element\n");
	scanf("%s", arr1);
	printf("Enter the second element\n");
	scanf("%s", arr2);
	int length1= strlen(arr1);
	int length2= strlen(arr2);
	int k=length2-1;
	for(i= length1-1; i>=0; i--)
	{
		int t= (int)arr1[i]+(int)arr2[k]+carry;
		sum[i]=t%10;
		carry= t/10;
		k--;
		if(k==0)
			sum[i]=arr1[i];
	}
	for(i=0; i<length1; i++)
	{
		printf("%d", sum[i]);
	}
}