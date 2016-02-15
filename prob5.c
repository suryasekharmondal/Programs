#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct position_1{
	long long int row_1[100], col_1[100];
};

struct position_3{
	long long int row_3[100], col_3[100];
};

struct position_1 pointer_1;
struct position_3 pointer_3;

int main(){
	long long int M;
	int i,j,p,q;
	scanf("%lld", &M);
	long long int matrix[M][M];
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			scanf("%lld", &matrix[i][j]);
			if(matrix[i][j]==1){
				pointer_1.row_1[p]=i;
				pointer_1.col_1[p]=j;
				p++;
			}	    
			else if(matrix[i][j]==3){
				pointer_3.row_3[q]=i;
				pointer_3.col_3[q]=j;
				q++;
			}
		}
	}
	i=0;
	j=0;
	long long int min= LONG_MAX;
	long long int max= LONG_MIN;
	
	for(i=0;i<p;i++){
		for(j=0;j<M;j++){
			long long int steps= abs(pointer_3.col_3-pointer_1.col_1)+ abs(pointer_3.row_3-pointer_1.row_1);
			if(steps<min)
			   min= steps;
		}
		if(min>max)
		   max=min;
	}
	printf("%lld\n",max);
}
