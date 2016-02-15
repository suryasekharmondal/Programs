#include<stdio.h>
int main(void) {
    int arr[200];
	char ch;
	int i=-1;
	while(((ch=getchar()))!='\n') {
	arr[++i]=ch-'0';
	}    	
	for(int j=0;j<=i;j++)
	printf("%d",arr[j]);
}

