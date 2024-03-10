#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int front=-1;
int rear=-1;
int Queue[SIZE];

void enqueue(){
    int elem;
    if(rear==SIZE-1){
        printf("\nQueue is full!!!\n");
    }else{
        printf("Enter the Element: \n");
        scanf("%d",&elem);
        rear++;
        Queue[rear]=elem;
    }
}

void dequeue(){
    if(front==rear){
        printf("\nQueue is Empty!!!\n");
    }else
    {
        front++;
        printf("\nElement: ",Queue[front]);
    }
}

void Display(){
    if(front==rear){
        printf("\nQueue is Empty!!!\n");
    }else
    {
        int i;
        printf("\nElements of Queue are\n");
        for(i=front+1;i<=rear;i++){
            printf("%d",Queue[i]);
        }
        printf("\n");
    }
}

void main(){
    int choice;
    while(1){
        printf("\n---CHOOSE FROM BELOW---\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");

        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Display();
            break;
        default:
            break;
        }
    }

}