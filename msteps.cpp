#include <bits/stdc++.h>
#define MAX_TERMS 250001
using namespace std;
int matrix[501][501];

struct table{
	int row, col, value;
}arr[MAX_TERMS];

bool comp(struct table b1, struct table b2){
	return(b1.value<b2.value);
}

int main(){
	int test, size, i, j, steps;
	int k, prev_row, prev_col;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &size);
		k=1;
		steps=0;
		for(i=1; i<= size; i++){
			for(j=1; j<= size; j++){
			   scanf("%d", &matrix[i][j]);
			   arr[k].row= i;
			   arr[k].col= j;
			   arr[k].value= matrix[i][j];
			   k++;
			}
		}
		sort(arr, arr+k, comp);
		/*for(i=1; i<k; i++)
		   printf("Row value= %d Column value= %d Value= %d\n",arr[i].row, arr[i].col, arr[i].value);*/
		for(i=1; i<k-1; i++){
			prev_row= arr[i].row;
			prev_col= arr[i].col;
			steps+= abs(arr[i+1].row-prev_row)+ abs(arr[i+1].col- prev_col);
		//	printf("Steps= %d\n", steps);
			}
		printf("%d\n", steps);
	}
	return 0;
}
