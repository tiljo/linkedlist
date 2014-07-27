#include "sbl.h"

void SortedInsert(struct node** headRef, struct node* newNode)
{
	struct node** store = headRef;
	struct node** prev = headRef;
	
	while( ((*store)->data) <= (newNode->data)){
		prev = store;
		store = &((*store)->next);
		if((*store)== NULL){
			break;
		}
	}
	newNode->next = (*store);
	(*prev)->next = newNode;
}

int main()
{

	struct node* head = BuildOneTwoThree();
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = 4;
	newNode->next = NULL;

	SortedInsert(&head,newNode);

	printf(" ditto %d\n",head->data);
	printf(" ditto %d\n",head->next->data);
	printf(" ditto %d\n",head->next->next->data);
	printf(" ditto %d\n",head->next->next->next->data);

	return 0;
}
