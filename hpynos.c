#include <stdio.h>
#define ull unsigned long long int
int main(){
	ull num,digit;
	ull counter=0;
	scanf("%llu", &num);
	if(num==1)  counter=1;
	ull sum=num;
		if(num/10!=0){
			while(sum/10!=0)
			{
				sum=0;
				while(num!=0){
					digit=num%10;
					sum+=digit*digit;
					num/=10;
				}
			num=sum;
			counter++;	
			}
	    }
		if(num/10==0){
			if(num==7)
				printf("%llu\n", counter+5);
			 else if(num==1)
			    printf("%llu\n", counter);
			else
			    printf("-1\n");
			}
		return 0;
}


