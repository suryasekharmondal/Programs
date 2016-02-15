#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main(){
	int no_of_cars,i;
	int flag,p,k;
	while(1){
	std::stack<int>mystack;
	cin>>no_of_cars;
	int arr[no_of_cars+1];
	flag=0; k=1;
	if(no_of_cars==0)
	   break;
	for(i=0;i<no_of_cars;i++)
	   cin>>arr[i];
	       for(i=0;i<no_of_cars;i++){
	       	    if(arr[i]==k){
	       	  	   k++; p=1;
	       	  	   if(arr[i]+1==arr[i+1])
	       	  	      continue;
	       	  	   if(arr[i]+1==mystack.top()){
	       	  	   	    while(arr[i]+p==mystack.top()){
	       	  	   	    	mystack.pop();
	       	  	   	    	p++;
	       	  	   	    	k++;
						}
				   }
			    }
			    else
			        mystack.push(arr[i]);
		   }
			if(mystack.empty())
			    flag=0;
			else{
				while(mystack.top()!=0){
					if(k==mystack.top()){
						mystack.pop();
						k++;
					}
					else{
						flag=1;
						break;
					}
				}
		    }
				if(flag==1)
				   cout<<"no"<<'\n';
				else
				   cout<<"yes"<<'\n';
	}
	return 0;
}


