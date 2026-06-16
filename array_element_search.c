//Write a program to search for a specific element in a 1D array.
#include<stdio.h>
int main(){
    int n;
    printf("Elements Number: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the list of arrays: ");
    for(int i=0; i<n; i++){
        printf("Arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    //Element search logic
    int user_input, found=0;
    printf("\nThe element to be searched for? ");
    scanf("%d",&user_input);

    for(int i=0; i<n; i++){
        if(user_input==arr[i]){
            printf("\nThe value: %d is in index: %d.",user_input,i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("\nThe element %d does not exists.",user_input);
    }
}
