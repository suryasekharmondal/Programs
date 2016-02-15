#include <stdio.h>
#include <stdlib.h>
void markMultiples(long int *arr[], long int p, long int n)
{
    long int i = 1, num;
    while ( (num = i*p) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
 
void SieveofEratosthenes(long int a, long int b){
	long int i, store;
	long int *arr;
	int flag=0;
	arr= malloc(b*sizeof(long int));
	for(i=0;i<b;i++)
	   arr[i]=0;

	
	for(i=2; i<a;i++){
		if(a%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)  store=a-1;
	else  store=a;
	
	printf("%ld\n", store);
	
	for (i= store ; i<b; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                printf("%ld\n", i+1);
                markMultiples(arr, i+1, b);
            }
        }
}
int main(){
	long int a,b; 
	int t;
	scanf("%d", &t);
	while(t--){
		
		scanf("%ld %ld", &a, &b);
		SieveofEratosthenes(a,b);
	}
}
