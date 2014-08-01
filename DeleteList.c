//#include "sbl.h"

void DeleteList(struct node** headRef)
{
	assert((*headRef)->next->next->next == NULL);
	free((*headRef)->next->next);
	free((*headRef)->next);
	struct node* current = (*headRef);
	free(current);
	(*headRef)=NULL;
}

/*void DeleteListTest()
{

	struct node* myList = BuildOneTwoThree();
	DeleteList(&myList);
}*/

/*int main()
{
	//here the commanded portion can be used for testing
	struct node* myself=BuildOneTwoThree();
	DeleteList(&myself);
	assert(myself != NULL);
	printf("%d\n", myself->next->next->data);
	DeleteListTest();
	return 0;
}*/
