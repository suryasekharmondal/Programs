#include <iostream>
#include <stack>
#include <stdio.h>
#include <cctype>
#include <string.h>
using namespace std;
int main()
{
	char formula[150];
	int i,v;
	stack<int>mystack;
	scanf("%s", formula);
	int len= strlen(formula);
	for(i=0;i<len;i++){
		if(isdigit(formula[i])){
			v=mystack.top();
			mystack.pop();
			mystack.push(v*(formula[i]-'0'));
		}
		else if(formula[i]=='(')   mystack.push(-1);
		else if(isalpha(formula[i])){
			if(formula[i]=='H')  mystack.push(1);
			else if(formula[i]=='C')  mystack.push(12);
			else mystack.push(16);
		}
		else if(formula[i]==')'){
			v=0;
			while(mystack.top()!=-1){
				v+=mystack.top();
				mystack.pop();
			}
			mystack.pop();
			mystack.push(v);
		}
	}
	v=0;
	while(!mystack.empty()){
		v+=mystack.top();
		mystack.pop();
	}
	printf("%d\n",v);
	return 0;
}
