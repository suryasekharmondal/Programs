#include <stdio.h>
#include <string.h>
int j=0;
int i,j=0;
char name[50];
int name_to_ascii[60], len, store,k;
int main(){
	while(1){
	printf("Enter your name: ");
	scanf("%s", name);
	len=strlen(name);
	i=0;
	while(i<len){
		store=name[i];
		printf("%d", store);
		while(store!=0){
			name_to_ascii[j]=store%10;
			j++;
			store/=10;
		}
                 i++;
	}
  }
  /*i=0;
  int store_add[j/2];  k=j/2;
  for(i=j/2;i>=0;i--){
        sum=name_to_ascii[i]+ name_to_ascii[j-1]+carry;
        store_add[k]=sum%10;
        sum/=10;
        if(sum!=0)
            carry=sum;
        k--;*/
        printf("\n");
        for(i=j;i>=0;i--)
            printf("%d", name_to_ascii[i]);
  } 
}

