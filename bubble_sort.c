#include<stdio.h>
int main(){
    int n;
    printf("Number of elements in the list?\n");
    scanf("%d",&n);
    if(n>=0){
    //array declaration
    int arr[n];

        //Runtime initialization of Array
    printf("Enter the list:\n");
    for(int i=0; i<n; i++){
        printf("\tarr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    //Unsorted list display
    printf("\nThe original list: [");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(", ");
        }
    }
    printf("]");

    int temp;
    //Bubble Sort logic
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        //Sorted list display
    printf("\nThe sorted list: [");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(", ");
        }
    }
    printf("]");
    }
    else{
        printf("The number of element must be greater than 0, ofc.");
    }
}