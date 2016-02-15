#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
	string arr;
	int no_of_exp,i;
	cin>>no_of_exp;
	std::stack<char>mystack;
	while(no_of_exp--){
		cin>>arr;
		int len=arr.size();
		for(i=0;i<len;i++){
			if(arr[i]=='('){
				mystack.push(arr[i]);
			}
			else if(arr[i]=='+'){
				mystack.push(arr[i]);
			}
			else if(arr[i]=='-'){
				if(arr[i-1]=='+' || arr[i-1]=='(')
				    mystack.push(arr[i]);
				else{
					while(mystack.top()!='('){
					cout<<mystack.top();
					mystack.pop();
				    }
				mystack.push(arr[i]);
			    }
			}
			else if(arr[i]=='*'){
				if(arr[i-1]=='+' || arr[i-1]=='-' || arr[i-1]=='(')
				    mystack.push(arr[i]);
				else{
					while(mystack.top()!='('){
					cout<<mystack.top();
					mystack.pop();
				    }
				mystack.push(arr[i]);
			    }
			}
				else if(arr[i]=='/'){
				if(arr[i-1]=='+' || arr[i-1]=='-' || arr[i-1]=='*'|| arr[i-1]=='(')
				    mystack.push(arr[i]);
				else{
					while(mystack.top()!='('){
					cout<<mystack.top();
					mystack.pop();
				    }
				mystack.push(arr[i]);
			    }
			}
			    else if(arr[i]=='^'){
				if(arr[i-1]=='+' || arr[i-1]=='-' || arr[i-1]=='*'|| arr[i-1]=='/' || arr[i-1]=='(')
				    mystack.push(arr[i]);
				else{
					while(mystack.top()!='('){
					cout<<mystack.top();
					mystack.pop();
				    }
				mystack.push(arr[i]);
			    }
			}
			    else if(arr[i]==')'){
			    	while(mystack.top()!='('){
			    		cout<<mystack.top();
			    		mystack.pop();
					}
					mystack.pop();
				}   
				else{
					cout<<arr[i];
				}
		}
		cout<<'\n';
	}
	return 0;
}

