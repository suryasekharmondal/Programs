#include <stdio.h>
int main(){
	int dimensions[1000][3];
	int n_supplier,i,j, min1, min2, min;
	long long int no_of_bricks;
	while(1){
		scanf("%d", &n_supplier);
		   if(n_supplier==0)
		      break;
		no_of_bricks=0;
		min=1000;
		for(i=0; i<n_supplier;i++){
			   scanf("%d", &dimensions[i][0]);
			   scanf("%d", &dimensions[i][1]);
			   scanf("%d", &dimensions[i][2]);
			    min2=dimensions[i][0]<dimensions[i][1] && dimensions[i][0]<dimensions[i][2]?dimensions[i][0]:dimensions[i][1]<dimensions[i][2]?dimensions[i][1]:dimensions[i][2];
			    min=min2<min?min2:min;
		        
	    }
		for(i=0;i<n_supplier;i++){
		if(dimensions[i][0]%min==0 && dimensions[i][1]%min==0 && dimensions[i][2]%min==0)
		   no_of_bricks+=(dimensions[i][0]*dimensions[i][1]*dimensions[i][2])/(min*min*min);
		else{
			if(dimensions[i][0]%min!=0)
			   dimensions[i][0]-=1;
			if(dimensions[i][1]%min!=0)
			   dimensions[i][1]-=1;
			if(dimensions[i][2]%min!=0)
			   dimensions[i][2]-=1;
			no_of_bricks+=(dimensions[i][0]*dimensions[i][1]*dimensions[i][2])/(min*min*min);
		}
	}
	printf("%lld\n", no_of_bricks);
}
return 0;
}
