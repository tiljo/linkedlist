#include"sbl.h"
int count;
struct node* myList;
int Count(struct node* head, int searchFor)
{
	int counter=0;
	
	while(head !=NULL){
		if(head->data == searchFor){
			counter++;
		}
		head = head->next;
	}
	
	return counter;
}

void CountTest()
{
	 myList = BuildOneTwoThree();
	 count = Count(myList,4);
}

main()
{
	CountTest();
	printf("%d\n",count);

}
