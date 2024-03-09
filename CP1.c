#include<stdio.h>
#include<stdlib.h>

void main(){
    int x,i,n,s,top=-1;
    printf("Enter the size of array: \n");
    scanf("%d",&x);
    int A[x];
    int size=sizeof(A)/sizeof(A[0]);
    printf("%d",size);
    while(1){
        int n,s;
        printf("\nChoose from below: \n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.Display\n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:printf("\nEnter the element you want to push: \n");
                scanf("%d",&s);
                if(top==size){
                    printf("OVERFLOW!!!\n");
                }
                else{
                    top=top+1;
                    A[top]=s;
                    printf("Element pushed\n");
                } 
                break;
        case 2: if(top==-1){
                    printf("UNDERFLOW!!!\n");
                }
                else{
                    printf("%d\n",A[top]);
                    top=top-1;
                }
                break;
        case 3:for(i=0;i<size;i++){
                    printf("\n%d\n",A[i]);
                }
                if(top==-1){
                    printf("Stack empty\n");
                }
                break;
        default:
            break;
        }

    }
    
}