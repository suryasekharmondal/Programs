#include <stdio.h>
int main(){
	int num, res;
	while(1){
		scanf("%d", &num);
		if(num==0)
		   break;
		res= ((num+1)*(3*(num+1)-1))/2;
		printf("%d\n", res);
	}
	return 0;
}
