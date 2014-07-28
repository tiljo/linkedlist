#include "sbl.h"

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
        }
        else{
		newNode->next = *headRef;
                *headRef = newNode;
	}
/*	printf("hed dat	%d\n",(*headRef)->data);
	if((*headRef)->next != NULL){
		printf("hed2	%d\n",(*headRef)->next->data);
	}

//	assert((*headRef)->next->next == NULL);
		printf("heddat	%d\n\n",(*headRef)->data);*/
	

}


void InsertSort(struct node** headRef)
{
 	struct node** temp = headRef;
 	struct node* stemp;
 	struct node* semp;
	struct node** newstore = temp;
//        struct node* newnode = malloc(sizeof(struct node));
        struct node** current = newstore;
        struct node* null = NULL;
	headRef = &(null);
	
        while(((*newstore)) != NULL){
		 current = newstore;
		semp = (*current)->next;
		(*current)->next = NULL;
		SortedInsert(&(*headRef),(*newstore));
		stemp = semp;
		newstore = &(stemp);

               //printf("new is %d\n",(*headRef)->data);
              // printf("new is %d\n",(*headRef)->next->data);
              // printf("new is %d\n\n",(*headRef)->next->next->data);
              if((*newstore) == NULL)
                        break;

		 printf("ihed dat %d\n",(*headRef)->data);
        if((*headRef)->next != NULL){
                printf("ihed2    %d\n",(*headRef)->next->data);
        }

      	if((*headRef)->next->next == NULL);
                printf("iheddat  %d\n\n",(*headRef)->data);




        }
}


int main()
{

        struct node* head = BuildOneTwoThree();

        InsertSort(&head);
        printf(" ditto %d\n",head->data);
//        printf(" ditto %d\n",head->next->data);
  //      printf(" ditto %d\n",head->next->next->data);
        return 0;
}

/*int main()
{
	 struct node* head =BuildOneTwoThree();
         struct node* newNode = malloc(sizeof(struct node));
         struct node* new_Node = malloc(sizeof(struct node));
        newNode->data = 12;
        newNode->next = NULL;
	 SortedInsert(&head,newNode);
	 printf(" ditto %d\n",head->data);
        printf(" ditto %d\n",head->next->data);
        printf(" ditto %d\n",head->next->next->data);
        printf(" ditto %d\n",head->next->next->next->data);
	printf("\n");
	new_Node->data = 5;
        new_Node->next = NULL;
	SortedInsert(&head,new_Node);


	printf(" ditto %d\n",head->data);
        printf(" ditto %d\n",head->next->data);
        printf(" ditto %d\n",head->next->next->data);
        printf(" ditto %d\n",head->next->next->next->data);
        printf(" ditto %d\n",head->next->next->next->next->data);
        return 0;
}*/
