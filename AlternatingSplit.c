#include "sbl.h"

void AlternatingSplit(struct node* source, struct node** aRef, struct node** bRef)
{
	assert((*bRef)== NULL);
	if(source == NULL){
		printf("no list to split\n");
		return;
	}

	struct node* trace = (*aRef)->next;
	*bRef = ((*aRef)->next);
	struct node** prev = &((*aRef)->next);
	
	while(trace != NULL){
		*prev = trace->next;
		prev = &(trace->next);
		trace = trace->next;
	}
}

int main()
{
	struct node* source = BuildOneTwoThree();
	struct node* null = NULL;
	struct node** aRef = &source;
	struct node** bRef = &null;

	AlternatingSplit(source,&source,&null);
	
	printf("a1	%d\n",(*aRef)->data);
	printf("a2	%d\n",(*aRef)->next->data);
	printf("b1	%d\n",(*bRef)->data);
//	printf("b2	%d\n",(*bRef)->next->data);
	return 0;
}
