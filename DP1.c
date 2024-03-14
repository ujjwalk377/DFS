#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void insert(){
    
}

void delete(){
    printf("del");
}

void preorder(){
    printf("preo");
}

void inorder(){
    printf("ino");
}

void postorder(){
    printf("poo");
}

void findTotal(){
    printf("fint");
}


void main(){
    int choice;
    while (1)
    {
    printf("\n--CHOOSE FROM BELOW--\n");
    printf("1.Insert a Node\n");
    printf("2.Delete a Node\n");
    printf("3.Preorder Traversal\n");
    printf("4.Inorder Traversal\n");
    printf("5.Postorder Traversal\n");
    printf("6.Find Total Leaf Nodes\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        preorder();
        break;
    case 4:
        inorder();
        break;
    case 5:
        postorder();
        break;
    case 6:
        findTotal();
        break;   
    default:
        break;
    }    
    }
    
}