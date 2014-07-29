#include "sbl.h"

void RemoveDuplicates(struct node* head)
{
	struct node* temp;
	struct node* copy;
	
	while((head != NULL) && (head->next != NULL)){
			temp = head->next;
		
		while(head->data == temp->data){
			
				copy = temp->next;
				free(head->next);
				head->next = copy;
				temp = copy;
			
			if(copy == NULL)
				break;
		}
		head = temp;
	}


}


int main()
{
	struct node* header = BuildOneTwoThree();
	RemoveDuplicates(header);
	printf("%d\n",header->data);
	printf("%d\n",header->next->data);
	printf("%d\n",header->next->next->data);
	//printf("%d\n",header->next->next->next->data);
	//printf("%d\n",header->next->next->next->next->data);
	
	return 0;
}
