#include "sbl.h"

struct node* ShuffleMerge(struct node* a, struct node* b)
{
	if(a==NULL && b==NULL){
		printf("no list\n");
		return a;
	}
	struct node** prev = &(a->next);
	struct node* trace = a;
	struct node* btrace = b;
	if(a== NULL)
		return b;

	while(trace !=NULL){
		if(trace != a){
			*prev = trace;
			prev = &(trace->next);
			trace = trace->next;
		}
		else{
			trace = trace->next;
		}

		if(btrace != NULL){
			*prev = btrace;
			prev = &(btrace->next);
			btrace = btrace->next;
		}
		else{
			break;
		}
	}
	return a;
}

int main()
{
	struct node* a=BuildOneTwoThree();
	struct node* b=BuildOneTwoThree();
	struct node* result = ShuffleMerge(a,b);
	while(result != NULL){
		printf("%d\n",result->data);
		result = result->next;
	}

	return 0;
}
	
	
