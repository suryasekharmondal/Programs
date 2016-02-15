#include <stdio.h>
#include <stdlib.h>
void quicksort(long int *x,long int first,long int last){
    long int pivot,j,temp,i;

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
int main()
{
	long int t,i;
	long int *arr;
	scanf("%ld",&t);
	arr=malloc(sizeof(long int)*t);
	for(i=0;i<t;i++)
	   scanf("%ld",&arr[i]);
	quicksort(arr,0,t-1);
	for(i=0;i<t;i++)
	   printf("%ld\n", arr[i]);
	return 0;
}
