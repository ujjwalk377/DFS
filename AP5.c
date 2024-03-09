#include<stdio.h>

void quickSort(A,l,h){
    if(l<h){
        int pivot=partition(A,l,h);
        quickSort(A,l,pivot-1);
        quickSort(A,pivot+1,h)
    }
    void partition(A,l,h){
    pivot=A[l];
    i=l;
    j=h;
    while(l<h){
        while(A[i]<=pivot){
            i++;
        }
        while(A[j>pivot]){
            j--;
        }
        if(l<h){
            swap(A[j],A[i]);
        }
        A[i]=A[j];
        A[j]=pivot;
        return j;
        }
    } 
}

void main(){
    int n,temp,data;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int l=A[0];
    int h=A[n];
    quicksort(A,l,h);
}