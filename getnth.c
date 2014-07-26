#include"sbl.h"

int GetNth(struct node* head, int index)
{
	int number=0,i;
	for (i=0;i<=index;i++){

		assert(head != NULL);
		number = head->data;
		head=head->next;
	}
	return number;
}
main()
{
	struct node* myList=BuildOneTwoThree();
	int lastNode = GetNth(myList,2);
	printf("%d\n",lastNode);
}
		 
