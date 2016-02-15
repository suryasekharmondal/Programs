#include <stdio.h>
int main()
{
	long int t,N, i, r_mang;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &N);
		r_mang=0;
		for(i=1; i<=N-2; i+=2)
			r_mang= r_mang+i;
	int store= r_mang%N;
	printf("%d\n", store);
	}
	return 0;
}
