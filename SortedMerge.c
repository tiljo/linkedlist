#include "MoveNode.c"
struct node* SortedMerge(struct node* a, struct node* b)
{


	struct node* biglist = NULL;
	struct node* temp = NULL;
	struct node** bigref = &biglist;


	if((a == NULL)  && (b == NULL)){
		printf("error: no lists\n");
		return	 biglist;
	}
	
	if(a == NULL ){
		return b;
	}
	if(b == NULL){
		return a;
	}

	while((a!=NULL) && (b != NULL)){
		if((a->data) <  (b->data)){
			MoveNode(bigref,&a);
		}
		else{
			MoveNode(bigref,&b);	
		}
	}
	if(a == NULL){
		 MoveNode(bigref,&b);
	}
	else{
         	 MoveNode(bigref,&a);
	}
	temp = (biglist->next);
	biglist->next = NULL;
	while((temp) != NULL){
		MoveNode(bigref, &(temp));
	}//*temp = NULL;
	return biglist;
} 
	

	

int main()
{
	struct node* head = malloc(sizeof(struct node));
	struct node* headb = malloc(sizeof(struct node));

	head->data = 1;
        head->next= malloc(sizeof(struct node));

        head->next->data = 4;
        head->next->next = malloc(sizeof(struct node));

        head->next->next->data = 7;
        head->next->next->next= NULL;


	headb->data = 3;
        headb->next= malloc(sizeof(struct node));

        headb->next->data = 5;
        headb->next->next = malloc(sizeof(struct node));

        headb->next->next->data = 6;
        headb->next->next->next= NULL;
	struct node* result;
	result = SortedMerge(head,headb);

	while(result != NULL){
		printf("%d\n",result->data);
		result = result->next;
	}
	return 0;
}


