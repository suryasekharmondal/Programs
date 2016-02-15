#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int Knapsack(int maxCost, int cost[], int fun[],int numOfParties){
	int dp[numOfParties+1][maxCost+1];
	int i,j,amount=0;
	for(i=0;i<=maxCost;i++)
	   dp[numOfParties][i]=0;
	for(i=numOfParties-1;i>=0;i--){
		for(j=0;j<=maxCost;j++){
			if(j-cost[i]>=0){
			   dp[i][j]=max(dp[i+1][j],fun[i]+dp[i+1][j-cost[i]]);
			   
		    }
			else
			   dp[i][j]=dp[i+1][j];
		}
	}
	int best=dp[0][maxCost];
	for(i=maxCost;i;i--){
		if(dp[0][i]<best) break;
	}
	printf("%d %d\n\n",i+1, dp[0][maxCost]);
}
int main(){
	int maxCost, numOfParties, cost[150],fun[150],i;
	while(1){
		scanf("%d %d", &maxCost, &numOfParties);
		if(maxCost==0 && numOfParties==0)
		   break;
		for(i=0;i<numOfParties;i++)
		   scanf("%d %d", &cost[i], &fun[i]);
		   Knapsack(maxCost,cost,fun,numOfParties);
	}
	return 0;
}
