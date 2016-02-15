#include <stdio.h>
int no_of_girlfriends, amount, A[20], B[20], count,i,j, count;
int solve(int index, int rem){
	if(index==no_of_girlfriends){
		if(rem==0)
		   return 1;
		return 0;
	}
	for(j=A[i]; j<=B[i] && j<=rem; j++){
		count+=solve(i+1, rem-j);
	}
	return count;
}
int main(){
	while(1){
		scanf("%d %d",&no_of_girlfriends, &amount);
		if(no_of_girlfriends==0 && amount==0)
		   break;
		count=0;
		for(i=0;i<no_of_girlfriends;i++)
			scanf("%d %d",&A[i],&B[i]);
		printf("%d\n",solve(0,amount));
	}
	return 0;
}
