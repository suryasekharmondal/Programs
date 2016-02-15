#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 2000

char* create(char *);
void printArray(char *);
char* memory_alloc(char *);
int find_length(char *);
void string_compare(char *, char *);
void string_concatenate(char *, char *);
void string_copy(char *, char *);

char *arr, *arr1, *arr2, ch;
int i;
int count;

void printArray(char *a){
	printf("The array created is: %s\n", a);
}

char* memory_alloc(char *a){
	return a= malloc(MAX_TERMS * sizeof(char));
}

char* create(char *temp){
	
	i=0;
	temp= memory_alloc(temp);
	getchar(); // to gobble up the enter key
	
	printf("Enter an array(<1000 characters): ");
    do{
    	
    	ch= getchar();
    	temp[i++]=ch;
    	
	}while(ch!='\n' && i<MAX_TERMS);
	
	i=i-1;
	temp[i]='\0';
	printArray(temp);
	return temp;
	
}
int find_length(char *a){
	 
	 count=0;
	 gets(a);
	 while(a[++count]!='\0');
     return count;
}

void string_compare(char *a, char *b){
	
	int j=0;
	printf("\nThe comparison of the two strings reveals that: \n");
	while(a[j] == b[j] && b[j] != '\0')
      j++;
    if (a[j] > b[j])
      printf("\nstring 1 > string 2");
    else if (a[j] < b[j])
      printf("\nstring 1 < string 2");
    else
      printf("\nstring 1 = string 2");
 
}

void string_concatenate(char *a, char *b){
	
	int j=0, k=0;
	printf("\nThe concatenation of the two strings produces the result: \n");
	while(a[j]!='\0'){
		arr[k++]= a[j++];
	}
	j=0;
	while(b[j]!='\0'){
		arr[k++]= b[j++];
	}
	printf("%s", arr);
}

void string_copy(char *a, char *b){
	
	int j=0, k=0;
	printf("\nCopying of one string onto another produces the result: \n");
	while(b[j]!='\0'){
		arr[k]=b[j];
		b[j]=a[j];
		a[j++]=arr[k++];
	}
	printf("New string 1: %s\n", a);
	printf("New string 2: %s\n", b);
}

void find_substring(char *a, char *b){
	
	int j=0, k, pos, flag=0, l;
	while(a[j]!='\0'){
		if(a[j]==b[0]){
			pos=j+1;
			k=j;
			l=0;
			while(b[l]!='\0'){
				if(a[k]==b[l]){
					flag=1;
					k++;
					l++;
					continue;
				}
				else{
					flag=0;
					break;
				}
			}
			if(flag==1){
			   printf("Substring found at position %d\n", pos);
			   break;	
			}
			else{
				j++;
				continue;
			}
		}
		else{
			j++;
			continue;
		} 
	}
	if(flag==0){
		printf("Substring not found");
	}
}

void frequency(char *a){
	
	while(a[j]!='\0'){
		if(a[j]==0){ j++; continue; }
		while(a[k]==a[j]){
			count++;
		}
	}
}

int main(){
	int choice;
	printf("\n\n\n1)Create a string using dynamic allocation of arrays\n2)Find the length of the string\n3)Compare two strings\n4)Concatenate two strings\n5)Copy a string into another one\n6)Search for the particular substring in the string\n7)Find the frequency of letters in a string\n8)Convert the case of the letters\n9)Replace any letter with another ne in the string\n10)Count number of words in the string\n11)Remove spaces from the string\n12)Find the reverse of the string\n\nEnter your choice: ");
    scanf("%d", &choice);
    
    switch(choice){
    	
    	case 1: arr= create(arr);
		        break;
		
		case 2: arr= create(arr);
		        printf("%d", find_length(arr));
		        break;
	
		case 3: arr1= create(arr1);
		        arr2= create(arr2);
	            
	            string_compare(arr1, arr2);
				break;
				
		case 4: arr1= create(arr1);
		        arr2= create(arr2);
				arr= memory_alloc(arr);
				
				string_concatenate(arr1, arr2); 
				break;
				
		case 5: arr1= create(arr1);
		        arr2= create(arr2);
		        arr= memory_alloc(arr);
		        
		        string_copy(arr1, arr2);
		        break;
		        
		case 6: arr= create(arr);
		        arr1= create(arr1);
		        
		        find_substring(arr, arr1);
		        break;
		        
		case 7: arr= create(arr);
		
		        frequency(arr);
		        break;
	}
}
