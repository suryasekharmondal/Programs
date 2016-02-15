#include <stdio.h>
/*int max(int a, int b){
	return a>b?a:b;
}*/
int main(){
	int t,count1,count0,i,j,N,k,sum;
	char arr[200];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &N);
		scanf("%s", arr);
		sum=0;
		k=0;
		for(i=k;i<N;i++){
			count1=count0=0;
			for(j=i;j<N;j++){
				if(arr[j]=='1')
				   count1++;
				else
				   count0++;
			}
			j=N-1;
			while(count0>=count1){
				if(arr[j]=='1')
				  count1--;
				else
				  count0--;
			j--;
			}
			sum+=count0+count1;
			k=j+1;
		}
		printf("%d\n",sum);
	}
	return 0;
}
