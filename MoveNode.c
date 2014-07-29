#include "sbl.h"

void MoveNode(struct node** destRef, struct node** sourceRef)
{
	if((*sourceRef) == NULL){
		printf("Error: no source\n");
		return;
	}

	struct node* temp = (*sourceRef)->next;
	(*sourceRef)->next = *destRef;
	*destRef = *sourceRef;
	*sourceRef=temp;
}

int main()
{

	struct node* source = BuildOneTwoThree();
	struct node* dest = BuildOneTwoThree();

	MoveNode(&dest, &source);
	printf("%d\n",dest->data);
	printf("%d\n",dest->next->data);
	printf("%d\n",dest->next->next->data);
	printf("%d\n",dest->next->next->next->data);
	printf("\n");
	printf("%d\n",source->data);
	printf("%d\n",source->next->data);
	
	return 0;
}
	
