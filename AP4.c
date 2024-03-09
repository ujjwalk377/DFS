#include<stdio.h>

void main(){
    int n,temp,data;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        temp=A[i];
        int j=i-1;
        while(A[j]>temp && j>=0){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }
    printf("The Sorted Array: \n");
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }
}