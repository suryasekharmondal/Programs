#include <stdio.h>
#include <stdlib.h>

struct listNode{
	int data;
	struct listNode *next;
} *head, *tail, *temp;

int main(){
	
	int n, dat;
	printf("Enter the number of elements you want to enter into the linked list: ");
	scanf("%d", &n);
	
	head= (struct listNode*)malloc(sizeof(struct listNode));
	
	printf("Enter the data you would want to be pushed: ");
	scanf("%d", &dat);
	
	head->data= dat;
	head->next= NULL;
	tail= head;
	n-=1;
	
	while(n--){
		
		temp= (struct listNode*)malloc(sizeof(struct listNode));
		
		printf("Enter the data you would want to be pushed: ");
	    scanf("%d", &dat);
	
		temp->data= dat;
		temp->next= NULL;
		
		tail->next= temp;
		tail= temp;
	}
	while(head!=NULL){
		printf("%d-> ", head->data);
		head=head->next;
		
	}
	return 0;
}
