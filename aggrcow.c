#include <stdio.h>
int main(){
	int t,i,j,temp,n, C;
	long int N[100000];
	scanf("%d", &t);
	while(t--){
		scanf("%d  %d", &n, &C);
		for(i=0;i<n;i++)
			scanf("%ld", &N[i]);
		   for(i=0;i<n;i++){
			   for(j=0;j<n-1-i;j++){
				   if(N[j]>N[j+1]){
					temp=N[j];
					N[j]=N[j+1];
					N[j+1]=temp;
				   }
			   }
		   }
		   for(i=0;i<n;i++)
		      printf("%ld", N[i]);
		}
}
