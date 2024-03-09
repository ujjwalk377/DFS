#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node* Head=NULL;

void search(){
    int item;
    printf("\nEnter the item to search\n");
    scanf("%d",&item);
    struct node* temp;
    temp=Head;
    while (temp!=NULL)
    {
        if(temp->data==item){
            printf("\nFound the element\n");
        }
        else{
            printf("\nElement Not Found!!!\n");
        }
        temp=temp->next;
    } 
}

void InsertAtBeg(){
    int n,i,elem;
        if(Head==NULL){
            printf("\nHow many nodes you want to insert:\n ");
                scanf("%d",&n);
                if(n!=0){
                    struct node* temp=(struct node*)malloc(sizeof(struct node));
                temp->next=NULL;
                temp=Head;
                int i;
                printf("\nEnter the element: \n");
                scanf("%d",&temp->data);

                for(i=2;i<=n;i++){
                    struct node* ptr=(struct node*)malloc(sizeof(struct node));
                    printf("\nEnter the element\n");
                    scanf("%d",&ptr->data);
                    Head=ptr;
                    ptr->next=temp;
                }
            }
            printf("\nList created\n");  
        }
        else{
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            ptr->data=elem;
            ptr->next=Head;
            Head=ptr;
        }
}

void InsertAfterElem(){
    int elem,after;
    printf("Enter the element: ");
    scanf("%d",&elem);
	printf("Enter the element after: ");
	scanf("%d",&after);
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    ptr->data=elem;
    temp=Head;
    int i;
    for(i=0;i<after-2;i++){
        temp=temp->next;
        if(temp==NULL){
            printf("\ncan't insert\n");
            return;
        }
        else{
            ptr->next=temp->next;
            temp->next=ptr;
            printf("\nNode inserted\n");
        }
    }   
}

void InsertAtEnd(){
    int elem;
    printf("\nEnter the element\n");
    scanf("%d",&elem);
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    ptr->data=elem;
    ptr->next=NULL;
    if(Head==NULL){
        Head=ptr;
    }
    else{
        Head=temp;
       while(temp->next!=NULL){
        temp->next=ptr;
        ptr->next=NULL;
       }
    }
    
}
void DeleteFromBeg(){
    struct node* ptr;
    if(Head==NULL){
        printf("\nEmpty list\n");
    }
    else{
        ptr=Head;
        Head=ptr->next;
        free(ptr);
        printf("\nNode Deleted\n");

    }
}
void DeleteFromEnd(){
    struct node* ptr;
    if(Head==NULL){
        printf("\nEmpty list\n");
    }
    else if(Head->next==NULL){
        Head=NULL;
        free(Head);
        printf("\nNode Deleted\n");
    }
}
void DeleteAfterElem(){
    int after;
    printf("Enter the element: ");
	scanf("%d",&after);
    struct node *ptr;
    ptr=Head;
    int i;
    struct node* temp;
      for(i=0;i<after;i++){
        temp=ptr;
        ptr=ptr->next;
        if(ptr==NULL){
            printf("\ncan't Delete\n");
            return;
        }
    }
    temp->next=ptr->next;
    free(ptr);
    printf("\nNode deleted\n");

}
void DeleteList(){
    struct node* temp;
    temp=Head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        free(temp);
    }
    printf("\nExit Successfully!!!\n");
    
}

void traverse(){
    struct node* temp;
    if(Head=NULL){
        printf("\nEmpty List\n");
    }else{
        temp=Head;
	    while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
    }
   
}

int main()
{
	int choice,option,n;
	while (1)
	{
		printf("\n---CHOOSE FROM BELOW---\n");
		printf("1. Insert at Beg\n");
		printf("2. Insert at End\n");
		printf("3. Insert after an Element\n");
		printf("4. Traverse in order\n");
		printf("5. Delete from Beg\n");
		printf("6. Delete from End\n");
		printf("7. Delete after Element\n");
        printf("8. Search and Element\n");
        printf("9. Exit\n");
		printf("\nEnter Your Choice: \n");
		scanf("%d", &choice);

		switch(choice){
		case 1: InsertAtBeg();
		  		break;
		case 2: InsertAtEnd();
				break;
		case 3: InsertAfterElem();
				break;
		case 4: traverse();
				break;
		case 5: DeleteFromBeg();
				break;
		case 6: DeleteFromEnd();
				break;
		case 7: DeleteAfterElem();
				break;
		case 8: search();
				break;
        case 9: DeleteList();
                break;
	    }
    }
    return 0;
}