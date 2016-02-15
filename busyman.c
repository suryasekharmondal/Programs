#include <stdio.h>
void quicksort(int x[],int y[],int first,int last){
    int pivot,j,temp,temp1,i;

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
                temp1=y[i];
                  y[i]=y[j];
                  y[j]=temp1;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         temp1=y[pivot];
         y[pivot]=y[j];
         y[j]=temp1;
         quicksort(x,y,first,j-1);
         quicksort(x,y,j+1,last);

    }
}
int main(){
	int t,no_of_activities,i,j;
	int S[100000], F[100000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &no_of_activities);
		for(i=0;i<no_of_activities;i++)
		   scanf("%d %d", &S[i], &F[i]);
		   quicksort(F,S,0,no_of_activities-1);
		   int sel_act=1;
		   j=0;
		   for(i=1;i<no_of_activities;i++){
		   	  if(S[i]>=F[j]){
		   	  	    sel_act+=1;
		   	  	    j=i;
				 }
		   }
		   printf("%d\n", sel_act);
		   }
	return 0;
}
