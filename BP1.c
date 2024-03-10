#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *Head = NULL;

void createList()
{
    if (Head == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            Head = newnode;
            temp = Head;
            printf("\nEnter number to"
                " be inserted : ");
            scanf("%d", &data);
            Head->data = data;
 
            for (int i = 2; i <= n; i++) {
                newnode = malloc(sizeof(struct node));
                temp->next = newnode;
                printf("\nEnter number to"
                    " be inserted : ");
                scanf("%d", &data);
                newnode->data = data;
                temp = temp->next;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}

void InsertAtBeg(){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr=NULL){
        printf("\nOVERFLOW!!!\n");
    }else
    {
        printf("\nEnter the data\n");
        scanf("%d",&ptr->data);
        ptr->next=Head;
        Head=ptr;
    }
    
}

void search()
{
    int item;
    printf("\nEnter the item to search\n");
    scanf("%d", &item);
    struct node *temp;
    temp = Head;
    int flag=0;
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            flag=1;
            break;
        }
        else
        {
            temp = temp->next;
        }
        
    }
    if(flag==1){
        printf("\nfound the element!!!\n");
    }else
    {
        printf("\nElement not found!!!\n");
    }
}

void InsertAfterElem()
{
    int elem, after;
    printf("Enter the element: ");
    scanf("%d", &elem);
    printf("Enter the element after: ");
    scanf("%d", &after);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    ptr->data = elem;
    temp = Head;
    int i;
    for (i = 0; i < after - 2; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\ncan't insert\n");
            return;
        }
        else
        {
            ptr->next = temp->next;
            temp->next = ptr;
            printf("\nNode inserted\n");
        }
    }
}

void InsertAtEnd()
{
    int elem;
    printf("\nEnter the element\n");
    scanf("%d", &elem);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    ptr->data = elem;
    ptr->next = NULL;
    if (Head == NULL)
    {
        Head = ptr;
    }
    else
    {
        Head = temp;
        while (temp->next != NULL)
        {
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}
void DeleteFromBeg()
{
    struct node *ptr;
    if (Head == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        ptr = Head;
        Head = ptr->next;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}
void DeleteFromEnd()
{
    struct node *ptr;
    if (Head == NULL)
    {
        printf("\nEmpty list\n");
    }
    else if (Head->next == NULL)
    {
        Head = NULL;
        free(Head);
        printf("\nNode Deleted\n");
    }
}
void DeleteAfterElem()
{
    int after;
    printf("Enter the element: ");
    scanf("%d", &after);
    struct node *ptr;
    ptr = Head;
    int i;
    struct node *temp;
    for (i = 0; i < after; i++)
    {
        temp = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("\ncan't Delete\n");
            return;
        }
    }
    temp->next = ptr->next;
    free(ptr);
    printf("\nNode deleted\n");
}
void DeleteList()
{
    struct node *temp;
    temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        free(temp);
    }
    printf("\nExit Successfully!!!\n");
}

void traverse()
{
    struct node *temp;
    if (Head == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        temp = Head;
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice, option, n;
    do
    {
        printf("\n---CHOOSE FROM BELOW---\n");
        printf("1. Create List\n");
        printf("2. Insert at Beg\n");
        printf("3. Insert at End\n");
        printf("4. Insert after an Element\n");
        printf("5. Traverse in order\n");
        printf("6. Delete from Beg\n");
        printf("7. Delete from End\n");
        printf("8. Delete after Element\n");
        printf("9. Search an Element\n");
        printf("0. Exit\n");
        printf("\nEnter Your Choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createList();
            break;
        case 2:
            InsertAtBeg();
            break;
        case 3:
            InsertAtEnd();
            break;
        case 4:
            InsertAfterElem();
            break;
        case 5:
            traverse();
            break;
        case 6:
            DeleteFromBeg();
            break;
        case 7:
            DeleteFromEnd();
            break;
        case 8:
            DeleteAfterElem();
            break;
        case 9:
            search();
            break;
        case 0:
            DeleteList();
            break;
        default:
            printf("\nIncorrect choice!!!\n");
        }
    }while (choice!=0);
    {
        return 0;
    }
    
    return 0;
}