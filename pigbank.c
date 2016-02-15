#include <stdio.h>
#define INF 9999999
int dp[600][10050];
int min(int a, int b){
	return a<b?a:b;
}
int Knapsack(int maxWeight, int P[], int W[], int num){
	int i,j;
	for(i=1;i<=num;i++)
	   dp[i][0]=0;
	for(i=1;i<=num;i++){
		for(j=1;j<=maxWeight;j++){
				if (i == 1 && j < W[i])
				{
					dp[i][j] = INF;
					//keep[i][j] = 0;
				}
				else if (i == 1)
				{
					dp[i][j] = P[i] + dp[i][j - W[i]];
					//keep[i][j] = 1;
				}
				else if (j < W[i])
				{
					dp[i][j] = dp[i - 1][j];
					//keep[i][j] = 0;
				}
				else
				{
					dp[i][j] = min(dp[i - 1][j], P[i] + dp[i][j - W[i]]);
					//keep[i][j] = 1;
				}
			}
		}
		if(dp[num][maxWeight]>=INF)
		   printf("This is impossible.\n");
		else
		   printf("The minimum amount of money in the piggy-bank is %d.\n", dp[num][maxWeight]);
}
int main(){
	int t,i;
	int w_pig,w_whole,num;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &w_pig, &w_whole);
		if(w_whole<w_pig){
		   printf("This is impossible.\n");
		   break;
	    }
		scanf("%d", &num);
		int P[num+1], W[num+1];
		for(i=1;i<=num;i++)
		   scanf("%d %d", &P[i], &W[i]);
		int maxWeight= w_whole-w_pig;
		Knapsack(maxWeight, P, W, num);
	}
	return 0;
}
