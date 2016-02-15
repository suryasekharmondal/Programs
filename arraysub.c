#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int size,size2,i,k,final_max;
	scanf("%d", &size);
	printf("\n");
	int arr[size];
    for(i=0;i<size;i++){
    	scanf("%d", &arr[i]);
	}
	scanf("%d", &size2);
	for(i=0;i<=size-size2;i++){
		k=i;
		final_max=arr[i];
		while(k<i+size2-1){
			 final_max= max(final_max,arr[k+1]);
			 k++;
	    }
	printf("%d ", final_max);
	}
	return 0;
}
