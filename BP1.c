#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node* Head=NULL;
/*void search(int item){
    int i;
    for(i=0;i<)
}*/

void InsertAtBeg(int item){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=item;
        ptr->next=NULL;
        Head=ptr;
}

void InsertAfterElem(int item,int after){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    ptr->data=item;
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

void InsertAtEnd(int item){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    ptr->data=item;
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
void DeleteAfterElem(int after){
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
/*void DeleteList(){

}*/

void traverse(){
    struct node* temp;
    temp=Head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int element, after;
	int choice;
	while (1)
	{
		printf("\n---CHOOSE FROM BELOW---\n");
		printf("1. Insert at Beg\n");
		printf("2. Insert at End\n");
		printf("3. Insert after an Element\n");
		printf("4. Traverse in order\n");
		printf("5. Delete from Beg\n");
		printf("6. Delete from End\n");
		printf("7. Insert after Element\n");
		printf("8. Exit\n");
		printf("\nEnter Your Choice: \n");
		scanf("%d", &choice);

		switch(choice){
		case 1: printf("Enter the element: ");
		  		scanf("%d",&element);
		  		InsertAtBeg(element);
		  		break;
		case 2: printf("Enter the element: ");
				scanf("%d",&element);
				InsertAtEnd(element);
				break;
		case 3: printf("Enter the element: ");
				printf("Enter the element after: ");
				scanf("%d",&element);
				scanf("%d",&after);
				InsertAfterElem(element,after);
				break;
		case 4: traverse();
				break;
		case 5: DeleteFromBeg();
				break;
		case 6: DeleteFromEnd();
				break;
		case 7: printf("Enter the element: ");
				scanf("%d",&after);
				DeleteAfterElem(after);
				break;
		//case 8: DeleteList();
				//break;
	    }
    }
    return 0;
}