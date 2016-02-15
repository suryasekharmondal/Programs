#include <iostream>
#include <stack>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(int argc,char * argv[]){
	int n,i;
	unsigned long long int *arr,k,p,max,area,tp;
	stack<unsigned long long int>mystack;
	while(1){
		max=0;
		area=0;
		scanf("%d", &n);
		if(n==0)
		   break;
		arr=(unsigned long long int *)malloc(sizeof(unsigned long long int)*n);
		for(i=0;i<n;i++){
		   scanf("%llu", &arr[i]);
	    }
	i=0;
	while(i<n){
		if(mystack.empty() || arr[mystack.top()]<=arr[i]){
			mystack.push(i++);
		}
		else{
		   tp=mystack.top();
		   mystack.pop();
		   area=arr[tp]*(mystack.empty()?i:i-mystack.top()-1);
		   if(max<area)
		      max=area;	
		}
	}
	while(!mystack.empty()){
		tp=mystack.top();
		mystack.pop();
		area=arr[tp]*(mystack.empty()?i:i-mystack.top()-1);
		if(max<area)
		   max=area;
	}
	printf("%llu\n", max);
  } 
}
