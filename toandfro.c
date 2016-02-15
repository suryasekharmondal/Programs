#include <stdio.h>
#include <string.h>
int main(){
	char string[200], dummy[200];
	int col, i,j, counter2;
	while(1){
		scanf("%d", &col);
		if(col==0)
		   break;
		    int counter1=0;
		    int k=0,l=1;
		    i=0;
			scanf("%s", string);
			int length= strlen(string);
			for(j=1;j<=col;j++){
			    while(i<length){
			   	    dummy[i++]=string[counter1];
			   	    if((length/col)%2!=0){
			   	       if((i%(length/col))==0)
				          break;
				    }
				    counter2=counter1+(col*2)-1-k;
					dummy[i++]=string[counter2];  
				    counter1=counter2+l;
				     if((length/col)%2==0){
			   	       if((i%(length/col))==0)
				          break;
				     }  
			   }
			k+=2;
			l+=2;     
			counter1=j;
			}
			i=0;
			while(i<length)
			printf("%c", dummy[i++]);
			printf("\n");
		}
		return 0;
	}

