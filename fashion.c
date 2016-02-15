#include <stdio.h>
void quicksort(int x[],int first,int last){
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
	int t,N,i,sum;
	int men[1000], women[1000];
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		   scanf("%d", &men[i]);
	    for(i=0;i<N;i++)
		   scanf("%d", &women[i]);
		quicksort(men,0,N-1);
		quicksort(women,0,N-1);
		for(i=0;i<N;i++)
		   sum+=men[i]*women[i];
		printf("%d\n",sum);
	}
	return 0;
}
