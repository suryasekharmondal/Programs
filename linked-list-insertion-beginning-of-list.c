#include <stdio.h>
#include <stdlib.h>
/* Creating a structure for a node*/
struct listNode{
	int data;
	struct listNode *link;
}*head, *temp;

int main(){
	int n, dat;
	printf("Enter the number of elements you want to enter into the linked list: ");
	scanf("%d", &n);
	
	 
	head=(struct listNode*)malloc(sizeof(struct listNode)); //pointer of type struct listNode being created to point at
	                                                         //at the start of the list
	head= NULL;  //initializing head
	
	while(n--){
		//Creating a new instance of a pointer temp of type struct node for each node that is being added to the list
		temp=(struct listNode*)malloc(sizeof(struct listNode));
		
		printf("Enter the data you want to push in the linked list: ");
		scanf("%d", &dat);
		
		temp->data= dat;
		temp->link= NULL;                       //Initializing the temp pointer
		
		
		temp->link= head;   //linking the temp pointer with the start of the list so that the new node is added at the front
	    head= temp;         //making the head point to the new node as the start of the list
	    
	}
	
	while(head!=NULL){
		printf("%d-> ", head->data);
		head=head->link;
		
	}
	return 0;
}

