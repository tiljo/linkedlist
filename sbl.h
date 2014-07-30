#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node{
	int data;
	struct node* next;
};

int Length(struct node* head)
{
	struct node* current= head;
	int count=0;
	
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}

struct node* BuildOneTwoThree()
{
	struct node* head= malloc(sizeof(struct node));
	head->data = 1;
	head->next= malloc(sizeof(struct node));
	
	head->next->data = 2;
	head->next->next = malloc(sizeof(struct node));
	
	head->next->next->data = 3;
	head->next->next->next= NULL;//malloc(sizeof(struct node));

/*	head->next->next->next->data = 4;
	head->next->next->next->next = NULL;//malloc(sizeof(struct node));

	head->next->next->next->next->data = 4;
	head->next->next->next->next->next = NULL;*/
	
	
	return head;
}

/*int main()
{
	struct node* d;
	int len;
	
	d=build();
	len=length(d);
	printf("%d\n",len);

	return 0;	
	
}*/
	

	
