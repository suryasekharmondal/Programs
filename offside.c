#include <stdio.h>
int main()
{
	int A,D, count,flag,i,j;
	int a_dist[11], d_dist[11];
	char ans;
	scanf("%d %d", &A, &D);
	while(A!=0 && D!=0){
		for( i=0;i<A;i++)
		   scanf("%d", &a_dist[i]);
		for( j=0;j<D;j++)
		   scanf("%d", &d_dist[j]);
		   for( i=0; i<A; i++){
		   	flag=0;
		   	count=0;
		   	   for( j=0; j<D; j++){
		   	   	   if(d_dist[j]<=a_dist[i]){
						 count++;
						 if(count==2){
						 
						    flag=1;
						    break;
						}
		   	   	     }
				  }
				  if(flag==1){
				  
				     ans='N';
				     continue;
				 }
			      else{
			      	  ans='Y';
			      	  break;
				  }
				 }
		   printf("%c", ans);
	}
	return 0;
}

