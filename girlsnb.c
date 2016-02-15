#include <stdio.h>
#include <math.h>
int main(){
	int G,B;
	while(1){
		scanf("%d %d", &G, &B);
		if(G==-1 && B==-1)
		   break;
		if(G==0 && B==0){
		printf("0\n");
		continue;
	}
		double max=G>B?G:B;
		double min=G<B?G:B;
		int  min_genequality= ceil(max/(min+1));
		printf("%d\n", min_genequality);
	}
	return 0;
}
