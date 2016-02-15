#include <stdio.h>
#include <string.h>
void quicksort(int x[], char y[],int first,int last){
    int pivot,j,temp,i;
    char temp1[11];
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
                  strcpy(temp1,y[i]);
                  strcpy(y[i],y[j]);
                  strcpy(y[j],temp1);
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         strcpy(temp1,y[pivot]);
         strcpy(y[pivot],y[j]);
         strcpy(y[j],temp1);
         quicksort(x,y,first,j-1);
         quicksort(x,y,j+1,last);

    }
}
struct names{
	char child[1000][11];
};
int main(){
	int t,num,gen,i,j,count=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d", &num, &gen);
		struct names name[num][11];
		int no_of_children[num];
		switch(gen){
			case 1: for(i=0;i<num;i++){
				        scanf("%s ", name[i]);
				        scanf("%d ", no_of_children[i]);
				        for(j=0;j<no_of_children;j++){
				        	scanf("%s ", name[i].child[j]);
						}
				    }
				    quicksort(no_of_children,name,0,num-1);
				    for(i=num-1;i>=0;i--){
				       if(no_of_children[i]==no_of_children[i-1]){
				       	if(strcmp(name[i],name[i-1])<0){
				       		printf("%s %d\n", name[i], no_of_children[i]);
						   }
						else{
							printf("%s %d\n", name[i-1], no_of_children[i-1]);
						}
					   }
					   else{
					   	printf("%s %d\n",name[i], no_of_children[i]);
					   	count++;
					   	if(count==3)
					   	   break;
					   }	
					}
				break;
		}
	}
}
