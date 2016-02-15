#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int pos,j;
long int max(long int a, long int b){
	if(a>b){
		pos=j;
		return a;
	}
	else{
		return b;
	}
}
void quicksort(long int x[],long int first,long int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
int main(){
	long int N,K,i,count=0,diff,max1;
	long int *B, *G;
	int flag;
	scanf("%ld %ld", &N, &K);
	B=malloc(sizeof(long int)*N);
	G=malloc(sizeof(long int)*N);
	for(i=0;i<N;i++)
	   scanf("%ld", &B[i]);
	for(i=0;i<N;i++)
	   scanf("%ld", &G[i]);
	quicksort(B,0,N-1);
	for(i=N-1;i>=0;i--){
		max1=0;
		flag=0;
		for(j=0;j<N;j++){
			if(G[j]=='\0')
			   continue;
			diff=abs(B[i]-G[j]);
			if(diff<=K){
				flag=1;
				max1=max(diff,max1);
			}
		}
		if(flag==1){
		G[pos]='\0';
		count++;
	    }
	}
	printf("%ld\n",count);
	return 0;
}
