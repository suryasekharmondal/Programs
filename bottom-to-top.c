#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 10

struct stack_t{
	int top;
	int val[MAX_STACK_SIZE];
};
typedef struct stack_t *stack;
stack s;
 stack s_create(){
	if((s=(stack)malloc(sizeof(struct stack_t)))==NULL){
	   printf("Memory allocation error");
	   exit(0);
    }
    s->top=-1;
}
int s_full(){
	if(s->top==MAX_STACK_SIZE-1)
	   return 1;
}
int s_empty(){
	if(s->top==-1)
	   return 1;
}
void push(int e){
 	if(!(s_full()))
 	   s->val[++(s->top)]=e;
 	else
 		printf("Stack Overflow Error");
}
int stack_print_bottom_to_top(){
	if(s_empty()){
		return s->val[s->top];
	}
	(s->top)--;
	stack_print_bottom_to_top();
}
 int main(){
 	s_create();
 	int i=0;
 	for(i=0;i<10;i++){
 		push(i);
	 }
 }
