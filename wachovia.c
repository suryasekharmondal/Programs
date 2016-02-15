#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int Knapsack(int maxWeight, int W[], int val[],int num){
	int dp[num+1][maxWeight+1];
	int i,j;
	for(i=0;i<=maxWeight;i++)
	   dp[num][i]=0;
	for(i=num-1;i>=0;i--){
		for(j=0;j<=maxWeight;j++){
			if(j-W[i]>=0)
			   dp[i][j]=max(dp[i+1][j],val[i]+dp[i+1][j-W[i]]);
			else
			   dp[i][j]=dp[i+1][j];
		}
	}
	return dp[0][maxWeight];
}
int main(){
	int t, maxWeight, num, W[60],val[60],i;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &maxWeight, &num);
		for(i=0;i<num;i++)
		   scanf("%d %d",&W[i], &val[i]);
		printf("Hey stupid robber, you can get %d.\n",Knapsack(maxWeight,W,val,num));
	}
	return 0;
}
