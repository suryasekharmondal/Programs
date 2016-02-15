#include <stdio.h>
#include <stdlib.h>
long int fact(long int a){
	long int factorial=0,j;
	for(j=a;j>=1;j--)
	   factorial+=j;
	return factorial;
}
int main(){
	long int n,count1=0,count,i=0,j,k=0;
	char *s;
	long int *arr;
	scanf("%ld", &n);
	s=malloc(sizeof(char)*n);
	arr=malloc(sizeof(long int)*n);
	scanf("%s", s);
	for(i=0;i<n;i++){
		count=1;
		if(s[i]=='\0')
		   continue;
		for(j=i+1;j<n;j++){
			if(s[i]==s[j]){
				count++;
				s[j]='\0';
			}
		}
		if(s[i]!='\0'){
		   arr[k]=count;
		   k++;
	    }
	}
	for(i=0;i<k;i++){
	   count1+=fact(arr[i]);	
	}
	printf("%ld", count1);
	return 0;
}
