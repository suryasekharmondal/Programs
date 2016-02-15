#include <stdio.h>
#define MOD 1000000007
long int calcfibonacci(long int, long int[]);
long int fib(long int n){
	long int j,memo[n];
	for(j=0;j<=n;j++)
	   memo[j]=-1;
	memo[0]=0;
	memo[1]=1;
	long int store=calcfibonacci(n,memo);
	return store;
}
long int calcfibonacci(long int num,long int memo1[]){
	if(memo1[num]!=-1)
	   return memo1[num];
		memo1[num]=calcfibonacci(num-2,memo1)+calcfibonacci(num-1,memo1);
	   return memo1[num];
}

int main(){
	int t;
	long int s_no,f_no,i,sum;
	scanf("%d", &t);
	while(t--){
		scanf("%ld %ld", &s_no, &f_no);
		sum=1;
		for(i=s_no;i<=f_no;i++){
			sum+=fib(i)%MOD;
		}
		printf("%ld\n", sum-1);
	}
	return 0;
}
