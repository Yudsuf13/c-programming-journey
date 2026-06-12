#include<stdio.h>
int main(){
    int n;
    printf("Number of elements: ");
    scanf("%d",&n);

    printf("\nEnter the list of %d numbers: ",n);
    printf("\n");
    int num[n];
    for(int i=0;i<n;i++){
        printf("\tnum[%d]: ",i);
        scanf("%d",&num[i]);
    }


    printf("Original List:\n[");
    for(int i=0;i<n;i++){
        printf("%d,",num[i]);
    }
    printf("]");

    //smallest number from the array logic
    int k=0, j;
    for(int s=0;s<n;s++){
        k=s;
        for(int i=s;i<n;i++){
            if (num[k]>num[i]){
                k=i;
            }            
        }
        j=num[s];
        num[s]=num[k];
        num[k]=j;
    }
    
    printf("\nSorted List:\n[");
    for(int i=0;i<n;i++){
        printf("%d,",num[i]);
    }
    printf("]");
}