#include <stdio.h>
int main(){
	int t,sum,counter1,counter2,i, no_of_packets;
	int candy[10000];
	while(1){
		scanf("%d", &no_of_packets);
		   if(no_of_packets==-1)
		      break;
		      sum=counter1=counter2=0;
		      for(i=0;i<no_of_packets;i++){
		         scanf("%d", &candy[i]);
		         sum+=candy[i];
		      }
		      int mean= sum/no_of_packets;
		      for(i=0;i<no_of_packets;i++){
		      	if(candy[i]<mean)
		      	   counter1+=mean-candy[i];
		      	if(candy[i]>mean)
		      	   counter2+=candy[i]-mean;
			  }
			  if(counter1==counter2)
			     printf("%d\n", counter1);
			  else
			     printf("-1\n");
	}
	return 0;
}
