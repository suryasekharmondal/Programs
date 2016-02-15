/*Done using bottom up dp*/
#include<stdio.h>
#define maxn 2003
int max(int a,int b)
{
        return a>b?a:b;
}
int LongestCommonSubsequence(int S[],int T[], int length_of_S)
{
        int Slength=length_of_S;
		int Tlength=0;
        int k=0;
        while(T[k]!=0){
        	k++;
           Tlength++;
       }
       printf("%d %d\n", Slength, Tlength);
        /* Starting the index from 1 for our convinience (avoids handling special cases for negative indices) */
        int iter,jter;
        for(iter=Slength;iter>=1;iter--)
        {
                S[iter] = S[iter-1];
        }
        for(iter=Tlength;iter>=1;iter--)
        {
                T[iter] = T[iter-1];
        }
        int common[Slength+1][Tlength+1];
        /* common[i][j] represents length of the longest common sequence in S[1..i], T[1..j] */
        /* Recurrence:  common[i][j] = common[i-1][j-1] + 1 if S[i]==T[j]
                                     = max(common[i-1][j],common[i][j-1]) otherwise
        */      
        /*common[0][i]=0, for all i because there are no characters from string S*/
        for(iter=0;iter<=Tlength;iter++)
        {
                common[0][iter]=0;
        }
        /*common[i][0]=0, for all i because there are no characters from string T*/
        for(iter=0;iter<=Slength;iter++)
        {
                common[iter][0]=0;
        }
        for(iter=1;iter<=Slength;iter++)
        {
                for(jter=1;jter<=Tlength;jter++)
                {
                        if(S[iter] == T[jter] )
                        {
                                common[iter][jter] = common[iter-1][jter-1] + 1;
                        }
                        else
                        {
                                common[iter][jter] = max(common[iter][jter-1],common[iter-1][jter]);
                        }

                }
        }
        printf("%d\n",common[Slength][Tlength]);
        return common[Slength][Tlength];

}
int main()
{
	    int S[maxn],T[maxn];
        int t,max1;
        int i,j;
        scanf("%d",&t);
        while(t--){
        	max1=0;
        	i=0;
        	scanf("%d",&S[0]);
        	while(S[i]!=0){
        	   	i++;
        		scanf("%d", &S[i]);
            }
        	while(1){
        		j=0;
        		scanf("%d",&T[0]);
        		if(T[0]!=0){
        			while(T[j]!=0){
        				j++;
        				scanf("%d",&T[j]);
					}
					 max1=max(LongestCommonSubsequence(S,T,i),max1);
			    }
				else
				   break;
			}
			printf("%d\n", max1);
	}
		return 0;
}

