#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter the max size of Array: \n");
    scanf("%d",&n);
    int A[n];
    int front=-1;
    int rear=-1;
    int choice,elem;
    while(1){
        printf("\n---CHOOSE FROM BELOW---\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");

        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("Enter the value you want to insert: \n");
                scanf("%d",&elem);
                if(rear==n-1){
                printf("Queue is full!!!\n");
                }
                else{
                front=front+1;
                rear=rear+1;
                A[rear]=elem;
                }
                break;
        //case 2:
            //delete();
           // break;
        case 3:
            if(front==-1){
        printf("empty array\n");
        }
        else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d",A[i]);
            }
        }
        
        default:
            break;
        }
    }

}