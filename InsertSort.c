#include "sbl.h"

void SortedInsert(struct node** headRef, struct node* newNode)                                                    
{                                                                                                                 
        struct node** store = headRef;                                                                            
        struct node** prev = headRef;                                                                             
        if(((*headRef) != NULL) && ((*store)->data) <= (newNode->data)) {                                         
                 while( ((*store)->data) <= (newNode->data)){                                                     
                        prev = store;                                                                             
                        store = &((*store)->next);                                                                
                        if((*store)== NULL){                                                                      
                                break;                                                                            
                        }                                                                                         
                }                                                                                                 
                                                                                                                  
                newNode->next = (*store);                                                                         
                (*prev)->next = newNode;                                                                          
        }                                                                                                         
        else{                                                                                                     
                newNode->next = *headRef;                                                                         
                *headRef = newNode;                                                                               
        }                                                                                                         
                                                                                                                  
}                                                                                                                 
                                                                                                                  
                                                                                                                  
void InsertSort(struct node** headRef)                                                                            
{                                                                                                                 
        struct node* newnode= NULL;                                                                               
        struct node* temp = NULL;                                                                                 
        struct node** prev;                                                                                       
                                                                                                                  
                                                                                                                  
        newnode = (*headRef)->next;                                                                               
        (*headRef)->next = NULL;                                                                                  
                                                                                                                  
        while(newnode != NULL){                                                                                   
                prev = &(newnode->next);                                                                          
                temp = newnode->next;                                                                             
                *prev = NULL;                                                                                     
                SortedInsert(headRef,newnode);                                                                    
                newnode = temp;                                                                                   
        }              
}

int main()                                                                                                        
{                                                                                                                 
                                                                                                                  
        struct node* head = BuildOneTwoThree();                                                                   
                                                                                                                  
        InsertSort(&head);                                                                                        
        printf(" ditto %d\n",head->data);                                                                         
        printf(" ditto %d\n",head->next->data);                                                                   
        printf(" ditto %d\n",head->next->next->data);                                                             
        return 0; 


}



/*WRONG			void InsertSort(struct node** headRef)
{
        struct node** newstore = headRef;
        struct node* newnode = malloc(sizeof(struct node));
        struct node* current;
	printf("%d\n",(*newstore)->data);
	printf("%d\n",(*newstore)->next->data);
	printf("%d\n",(*newstore)->next->next->data);
        while(((*newstore)->next) != NULL){
                current = (*newstore)->next;
		newnode->data =current->data;
		newnode->next = NULL;
                SortedInsert(headRef, newnode);
		printf("new is %d\n",current->data);
                newstore = &(current->next);
		if((*newstore) == NULL)
			break;
	}

}*/


