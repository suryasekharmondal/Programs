#include <stdio.h>
int main(){
           int n;
           scanf("%d", &n);
              int pizza[3]={0};
           char slice[4];
           int l[3];
           while(n--){
           	scanf("%s", slice);
           	if(slice[0]=='1' && slice[2]=='2')  pizza[0]++;
           	if(slice[0]=='1' && slice[2]=='4')  pizza[1]++;
           	if(slice[0]=='3' && slice[2]=='4')  pizza[2]++;
           	}
           	int act_pizzas=0;
           	if(pizza[1]<=pizza[2]){
		     act_pizzas+=pizza[1];
           	 pizza[2]-=pizza[1];
           	 pizza[1]=0;
           }
           	else{
           	   act_pizzas+=pizza[2];
			   pizza[1]-=pizza[2];
			   pizza[2]=0;	
			}
			if(pizza[2]==0){
				l[0]=pizza[1]%4;
				l[1]=pizza[0]%2;
				act_pizzas+=pizza[1]/4;
				act_pizzas+=pizza[0]/2;
				if(l[0]==3 && l[1]==1)  act_pizzas+=2;
				else if(l[0]!=0 || l[1]!=0)  act_pizzas++;
			}
			else{
				act_pizzas+=pizza[2];
				act_pizzas+=pizza[0]%2+pizza[0]/2;
			}
			act_pizzas++;
			printf("%d",act_pizzas);
			return 0;
		}
