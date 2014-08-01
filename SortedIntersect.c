#include "sbl.h"

struct node* SortedIntersect(struct node* a, struct node* b)
{
	struct node* intersect = malloc(sizeof(struct node));
	struct node** temp ;
	struct node* result = intersect ;

	while((a != NULL)&&(b != NULL)){
		while((a->data)>=(b->data) &&(b != NULL)){
			if((a->data)==(b->data)){
				result->data = a->data;
				result->next = malloc(sizeof(struct node));
				temp =&(result->next);
				result = result->next;
				break;
			}
			else{
				b=(b->next);
			}
		}
		a=a->next;
	}
	*temp = NULL;
	return intersect;
}


int main()
{
	 struct node* heada= malloc(sizeof(struct node));
        heada->data = 1;
        heada->next= malloc(sizeof(struct node));

        heada->next->data = 2;
        heada->next->next = malloc(sizeof(struct node));

        heada->next->next->data = 3;
        heada->next->next->next= NULL;

	 struct node* headb= malloc(sizeof(struct node));
        headb->data = 2;
        headb->next= malloc(sizeof(struct node));

        headb->next->data = 3;
        headb->next->next = malloc(sizeof(struct node));

        headb->next->next->data = 5;
        headb->next->next->next= NULL;
	
	struct node* result = SortedIntersect(heada,headb);

	while(result !=NULL){
		printf("%d\n",result->data);
		result = result->next;
	}
	printf("\n");
	 while(heada !=NULL){
                printf("heada	%d\n",heada->data);
                heada = heada->next;
        }
	printf("\n");
	 while(headb !=NULL){
                printf("headb	%d\n",headb->data);
                headb = headb->next;
        }

	return 0;
}
