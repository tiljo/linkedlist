#include "sbl.h"

void Append(struct node** aRef, struct node** bRef)
{
	struct node** kref = aRef;
	while((*kref) !=NULL){
		kref =&((*kref)->next);
	}
	
	(*kref) = *bRef;
	*bRef = NULL;
}

int main()
{
	struct node* aref =NULL; //BuildOneTwoThree();
	struct node* bref = BuildOneTwoThree();
	Append(&aref,&bref);
	printf("%d\n",aref->data);
	printf("%d\n",aref->next->data);
	printf("%d\n",aref->next->next->data);
	//printf("%d\n",aref->next->next->next->data);
	printf("%d\n",bref->data);

	return 0;
}
