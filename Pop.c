#include"sbl.h"

int Pop(struct node** headRef)
{
	int value;
	assert((*headRef) != NULL);
	struct node* current= *headRef;
	*headRef= current->next;
	value = current->data;
	free(current);
	
	return value;
}
void PopTest()
{
	 struct node* head = BuildOneTwoThree();
         int a = Pop(&head);
	 int b = Pop(&head);
	 int c = Pop(&head);
	 int len = Length(head);
	 

}

int main()
{
	
	//here the commanded portion used only for testing purpose
	/*struct node* head = BuildOneTwoThree();
	int a = Pop(&head);
	int b = Pop(&head);
	int c = Pop(&head);
	int len = Length(head);
	assert(head == NULL);	
	printf("%d	%d	%d	%d\n",a,b,c,len);*/
	PopTest();
	return 0;
}
