#include "sbl.h"
void DeleteList(struct node** headRef)
{
        assert((*headRef)->next->next->next == NULL);
        free((*headRef)->next->next);
        free((*headRef)->next);
        struct node* current = (*headRef);
        free(current);
        (*headRef)=NULL;
}


void InsertNth(struct node** headRef, int index, int data)
{
	int i=0;
	struct node** store = headRef;
	while(i!= index){
		store = &((*store)->next);
			i++;
	}
	struct node* newnode = malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = *store;
	*store = newnode;

}

void InsertNthTest()
{
	struct node* head = NULL;

	InsertNth(&head, 0 , 13);
	InsertNth(&head, 1 , 42);
	InsertNth(&head, 1 , 5);
	
	DeleteList(&head);
}

int main()
{
//commanded portion only for testing
/*	 struct node* head = NULL;

        InsertNth(&head, 0 , 13);
	printf("index 0 is	%d\n", head->data);
        InsertNth(&head, 1 , 42);
	printf("index 1 is	%d\n",head->next->data);
        InsertNth(&head, 1 , 5);
	printf("index 2 is	%d\n",head->next->next->data);
	printf("index 1 is	%d\n",head->next->data);
	printf("index 0 is	%d\n",head->data);*/
	InsertNthTest();
	return 0;
}
