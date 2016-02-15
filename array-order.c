#include <stdio.h>
#include <stdlib.h>
int main(){
	
	long long int size;
	int *arr, i=0, flag=0;
	
    printf("Enter the size of the array: ");
    scanf("%lld", &size);
    
    arr= (int *)malloc(size * sizeof(int));
    
    printf("Enter the array: ");
    
    while(i<size)
    	scanf("%d", &arr[i++]);
    	
    i=0;
		
    if(arr[i]<arr[i+1]){
    	flag=1;
    	i++;
    	while(i <size){
    		if(arr[i]<arr[i+1]);
    		else if(arr[i]==arr[i+1])
    			flag=2;
    		else{
    			flag=0;
    			break;
			}  
			i++;   
		}
	}
	else if(arr[i]>arr[i+1]){
		flag=3;
		i++;
		while(i<size){
			if(arr[i]>arr[i+1]);
			else if(arr[i]==arr[i+1])
			   flag=4;
			else{
			  flag=0;
			  break;
		    }
			i++;
		}
	}
	else{
		i++;
		flag=5;
		while(i<size){
			if(arr[i]==arr[i+1]);
			else if(arr[i]<arr[i+1])
			   flag=4;
			else if(arr[i]>arr[i+1])
			   flag=2;
			else{
			  flag=0;
			  break;
		    }
			i++;
		}
	}
	switch(flag){
		
		case 0: printf("No particular order");
		        break;
		case 1: printf("Strictly increasing");
		        break;
		case 2: printf("Non-decreasing");
		        break;
		case 3: printf("Strictly decreasing");
		        break;
	    case 4: printf("Non-increasing");
	            break;
	    case 5: printf("Equal");
	            break;
	}
	return 0;
}
