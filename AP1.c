#include<stdio.h>
#include<stdlib.h>

void findFreq(int Arr[],int n){
    int fr[n];
    int visited=-1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(Arr[i]==Arr[j]){
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited){
            fr[i]=count;
        }
        if(fr[i]!=visited){
            printf("\nFrequency of %d\n",Arr[i]);
            printf("%d",fr[i]);
        }
    }
}
    
int main(){
    int n;
    printf("Enter the size of Array (less than 100): ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int size=sizeof(A)/sizeof(A[0]);
    findFreq(A,size);
    return 0;
}