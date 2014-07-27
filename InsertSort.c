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
	printf("Working\n");
}

void InsertSort(struct node** headRef)
{
        struct node** newstore = headRef;
        struct node* newnode = malloc(sizeof(struct node));
        struct node* current;
	/*printf("%d\n",(*newstore)->data);
	printf("%d\n",(*newstore)->next->data);
	printf("%d\n",(*newstore)->next->next->data);*/
        while(((*newstore)->next) != NULL){
                current = (*newstore)->next;
		newnode->data =current->data;
		newnode->next = NULL;
                SortedInsert(headRef, newnode);
		printf("new is %d\n",current->data);
                newstore = &(current);
		if((*newstore) == NULL)
			break;
	}
}


int main()
{

        struct node* head = BuildOneTwoThree();
        /*struct node* newNode = malloc(sizeof(struct node));
        newNode->data = 4;
        newNode->next = NULL;*/

       InsertSort(&head);// SortedInsert(&head,newNode);
	printf("scs\n");
        printf(" ditto %d\n",head->data);
        printf(" ditto %d\n",head->next->data);
        printf(" ditto %d\n",head->next->next->data);
       // printf(" ditto %d\n",head->next->next->next->data);

        return 0;
}
