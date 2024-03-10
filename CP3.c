#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front=-1;
int rear=-1;
int cQueue[SIZE];

void enqueue(int element){
    if((front==0 && rear==SIZE-1)||(front==rear+1)){
        printf("\nQUEUE IS FULL!!!\n");
        return;
    }else if (front==-1)
    {
        front=0;
        rear=0;
    }else if (rear==SIZE-1)
    {
        rear=0;
    }else
    {
        rear++;
    }
    cQueue[rear]=element;
    printf("\nElement Inserted\n");
}

int dequeue(){
    if(front=-1){
        printf("Queue is Empty!!!");
        return -1;
    }
    int element=cQueue[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }else if (front=SIZE-1)
    {
        front=0;
    }else
    {
        front++;
    }
    return element;
}

void display(){
    int i;
    if(front==-1){
        printf("\nQueue is Empty\n");
        return;
    }
    printf("\nQueue Elements are: \n");
    if(rear>=front){
        for(i=front;i<=rear;i++){
            printf("%d",cQueue[i]);
        }
    }else
    {
        for(i=front;i<SIZE;i++){
            printf("%d",cQueue[i]);
        }
        for(i=0;i<=rear;i++){
            printf("%d",cQueue[i]);
        }
    }printf("\n");
    
}

void main(){
    int choice,elem;
    while(1){
        printf("---CHOOSE FROM BELOW---\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:printf("\nEnter the element\n");
            scanf("%d",&elem);
            enqueue(elem);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        
        default:
            printf("WRONG CHOICE!!!/n");
            break;
        }

    }
    
}