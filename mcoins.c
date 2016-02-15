#include <stdio.h>
int K,L;
int isWinning(long int pos){
	int j;
	long int moves[]={1,pos-K,pos-L};
	for(j=0;j<3;j++){
		if(!isWinning(moves[j]))
		   return ;
	return 1;
	}
}
int main(){
	long int arr[50];
	int i,m;
	scanf("%d %d %d", &K, &L, &m);
	for(i=0;i<m;i++)
	   scanf("%ld", &arr[i]);
	for(i=0;i<m;i++){
		int flag=isWinning(arr[i]);
		if(flag==1)
		   printf("A");
		else
		   printf("B");
	}
	return 0;
}
