
	/*struct node** temp = headRef;
 	struct node* stemp;
 	struct node* semp;
	struct node** newstore = temp;
//        struct node* newnode = malloc(sizeof(struct node));
        struct node** current = newstore;
        struct node* null = NULL;
	headRef = &(null);
	
        while(((*newstore)) != NULL){
		 current = newstore;
		semp = (*current)->next;
		(*current)->next = NULL;
		SortedInsert(&(*headRef),(*newstore));
		stemp = semp;
		newstore = &(stemp);

               //printf("new is %d\n",(*headRef)->data);
              // printf("new is %d\n",(*headRef)->next->data);
              // printf("new is %d\n\n",(*headRef)->next->next->data);
              if((*newstore) == NULL)
                        break;

		 printf("ihed dat %d\n",(*headRef)->data);
        if((*headRef)->next != NULL){
                printf("ihed2    %d\n",(*headRef)->next->data);
        }

      	if((*headRef)->next->next == NULL);
                printf("iheddat  %d\n\n",(*headRef)->data);




