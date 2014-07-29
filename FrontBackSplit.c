#include "sbl.h"

void FrontBackSplit(struct node* sourse, struct node** frontRef, struct node** backRef )
{
	assert((*frontRef) !=NULL);
	
	if((*frontRef)->next == NULL)
		return;

	struct node** slow = &(sourse);
	struct node** fast = &(sourse);

	struct node** frontRefend = slow;
	slow = &((*slow)->next);
	fast = &((*fast)->next->next);

	while( (*fast)!= NULL){
		frontRefend = slow;
		slow = &((*slow)->next);
		if(((*fast)->next)!= NULL){
			fast = &((*fast)->next->next);
		}
		else{
			break;
		}
	}

	*backRef = ((*frontRefend)->next);
	(*frontRefend)->next = NULL;
}


int main()
{
	struct node* sourse = BuildOneTwoThree();
	struct node* back = NULL;

	FrontBackSplit(sourse, &(sourse), &(back));
	printf("%d\n", sourse->data);
	printf("%d\n", sourse->next->data);
	printf("back  %d\n", back->data);

	return 0;
}
