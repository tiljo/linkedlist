#include"MoveNode.c"
#include"DeleteList.c"
void Reverse(struct node** headRef)
{
	struct node* temp=NULL;
	while ((*headRef) != NULL){
		MoveNode(&temp,headRef);
	}
	*headRef = temp;
}

int main()
{
	struct node* head = BuildOneTwoThree();
	Reverse(&head);
	DeleteList(&head);
	assert(head == NULL);
	while(head != NULL){
		printf("%d\n",head->data);
		head= head->next;
	}
	return 0;
}
