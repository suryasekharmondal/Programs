#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *a;
char ch[10000][25];
int *getarray_integer(int n){
	a=malloc(n*sizeof(int));
	return 0;
}
void initarray_integer(int m){
	for(i=0;i<m;i++){
		a[i]=1+rand()%10000;
	}
}
void lin_search_int(int d, int m) {
      int k;
      a[0] = d;
      k = m - 1;
      while (d != a[k]) k = k - 1;
      if (k) 
        printf("\n%d is @ %dth place", d, k);
      else printf("\nDATA NOT FOUND");
}
void lin_search_float(float d, int m){
      int k;
      a[0]=d;
      k = m - 1;
      while (d != a[k]) k = k - 1;
      if (k) 
        printf("\n%d is @ %dth place", d, k);
      else printf("\nDATA NOT FOUND");
}
void lin_search_string(int m,char name[]){
     int k, flag=0;
     for(i=0;i<m;i++){
        if(strcmp(ch[i],name[])==0){
           pos=i;
           flag=1;
        }
        if(flag==0)
           printf("VALUE NOT FOUND\n");
        else
           print("Position is %d= ", pos);
}
int main(){
	int ch;
	printf("1) Linear Search\n2) Binary Search\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1: printf("1)For integer numbers\n2) For floating-point numbers\n3) For words\nEnter your choice: ");
		        scanf("%d", &ch);
		        switch(ch){
		        	case 1: printf("How many numbers do you want in the array?(<10000)\n");
		        	        scanf("%d", &n);
		        	          getarray_integer(n);
		        	          initarray_integer(n);
		        	        printf("Enter the number you want searched: ");
		        	        scanf("%d", &num_int);
		        	          lin_search_int(num_int,n);
		        	        break;
		        	case 2: printf("How many floating-point numbers do you want in the array?(<10000)\n");
		        	        scanf("%d", &n);
		        	        printf("Enter the floating-point numbers: \n");
		        	        for(i=0;i<n;i++)
		        	           scanf("%f", &a[i]);
		        	        printf("Enter the floating-point number you want searched: ");
		        	        scanf("%f", &num_float);
		        	           lin_search_float(num_float,n);
                                        break;
                                case 3: printf("How many words you want in the array?(<10000)\n");
                                        scanf("%d", &n);
                                        printf("Enter the words(length<25): \n");
                                           for(i=0;i<n;i++)
                                              scanf("%s", &ch[i]);
                                        printf("Enter the word you want searched: ");
                                        scanf("%s", name);
                                           lin_search_string(n,name); 
                                        break;
				}
				break;
	}
	return 0;
}
