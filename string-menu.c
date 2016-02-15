#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 2000 //standard array size

void create();
void printArray();
void memory_alloc();
void find_length();

char *arr, *arr1, *arr2, ch;
int i=0, j=0;
int count=0;

void printArray(){
	   printf("%s", arr);
}

void memory_alloc(){
	arr=(char*)malloc(MAX_TERMS * sizeof(char));
}
void create(){
	
	memory_alloc();
	getchar(); // to gobble up the enter key
	
	printf("Enter an array: ");
    do{
    	
    	ch= getchar();
    	arr[i++]=ch;
    	
	}while(ch!='\n' && i<MAX_TERMS);
	
	i=i-1;
	arr[i]='\0';
	printArray();
	
}
void find_length(){
	
	 gets(arr);
	 while(arr[++count]!='\0');
     printf("%d", count);
     
}

int main(){
	
	long long int size;
	int choice;
	printf("\n\n\n1)Create a string using dynamic allocation of arrays\n2)Find the length of the string\n3)Compare two strings\n4)Concatenate two strings\n5)Copy a string into another one\n6)Search for the particular substring in the string\n7)Find the frequency of letters in a string\n8)Convert the case of the letters\n9)Replace any letter with another ne in the string\n10)Count number of words in the string\n11)Remove spaces from the string\n12)Find the reverse of the string\n\nEnter your choice: ");
    scanf("%d", &choice);
    
    switch(choice){
    	
    	case 1: create();
		        break;
		
		case 2: printf("Enter an array: ");
		        memory_alloc();
		        
		        find_length();
		        break;
	
		case 3: create();
		        
		         
	                
	}
}
