#include "sbl.h"

/*void SortedInsert(struct node** headRef, struct node* newNode)
{
	struct node** store = headRef;
	struct node** prev = headRef;
	
	if((*store) == NULL){
		 newNode->next = (*headRef);
       		 *headRef  = newNode;
	}*/
	//else{
	/*if((*headRef) != NULL){
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
	else
		*headRef = newNode;	
}*/
void SortedInsert(struct node** headRef, struct node* newNode)
{
        struct node** store = headRef;
        struct node** prev = headRef;

        if(((*headRef) != NULL) && ((*store)->data) <= (newNode->data)) {
                 while( ((*store)->data) <= (newNode->data)){
                        prev = store;
                        store = &((*store)->next);
                        if((*store)== NULL){
                                break;
                        }
                }
                newNode->next = (*store);
                (*prev)->next = newNode;
                printf("Working\n");
        }
        else{
                newNode->next = *headRef;
                *headRef = newNode;
        }
}


int main()
{

	struct node* head =NULL; //BuildOneTwoThree();
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = 4;
	newNode->next = NULL;

	SortedInsert(&head,newNode);

	printf(" ditto %d\n",head->data);
/*	printf(" ditto %d\n",head->next->data);
	printf(" ditto %d\n",head->next->next->data);
	printf(" ditto %d\n",head->next->next->next->data);*/

	return 0;
}
