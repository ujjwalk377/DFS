#include<stdio.h>

void SelectionSort(int A[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]<A[j]){
            int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("The Sorted Array is: \n");
    for(int i=0;i<size;i++){
        printf("%d",A[i]);
    }
}

void BubbleSort(int A[],int size){
     for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(A[j+1]>A[j]){
            int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("The Sorted Array is: \n");
    for(int i=0;i<size;i++){
        printf("%d",A[i]);
    }
}

int main(){
    int n,x;
    printf("\nEnter the length of array: \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    while(1){
    printf("\nChoose from Below: \n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        BubbleSort(A,n);
        break;
    case 2:
        SelectionSort(A,n);
        break;
    default:
        break;
    }
    }

}