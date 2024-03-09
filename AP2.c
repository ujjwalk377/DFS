#include<stdio.h>
#include<stdlib.h>

void sortArray(int Arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(Arr[i]<=Arr[j]){
                int temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
    }
}

void LinearSearch(int Arr[],int size,int elem){
    int flag=0;
    for(int i=0;i<size;i++){
        if(Arr[i]==elem){
            flag=1;
            
        }
        else{
            flag=0;
            
        }
    }
    if(flag=1){
        printf("Element found\n");
    }
    else{
        printf("Element not found!!!\n");
    }
}

void BinarySearch(int Arr[],int size ,int elem){
    sortArray(Arr,size);
    int flag=0;
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
   while(high>=low){
    mid=(low+high)/2;

    if(elem<Arr[mid]){
        high=mid-1;
    }
    if(elem>Arr[mid]){
        low=mid+1;
    }
    else if(elem==Arr[mid]){
        printf("Item Found");
        break;
    }
   }
   
}



int main(){
    int n,s,i;
    printf("Enter the size of Array (less than 100): ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int size=sizeof(A)/sizeof(A[i]);
    printf("Enter the elements you want to search: ");
    scanf("%d",&s);
    while(1){
        printf("--CHOOSE FROM BELOW--\n");
        printf("1. Binary Search\n");
        printf("2. Linear Search\n");

        int choose;
        scanf("%d",&choose);

        switch (choose)
        {
        case 1: 
            BinarySearch(A,size,s);
            break;
        case 2:
            LinearSearch(A,size,s);
            break;
        default:
            break;
        }
    }
    return 0;
}