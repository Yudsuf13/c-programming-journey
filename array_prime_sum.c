//Write a program to find the sum of all prime numbers in a given array.

#include<stdio.h>
int main(){
    int n;
    printf("Number of element?\n");
    scanf("%d",&n);

    if(n>0){

        //array runtime initialisation
        int arr[n];
        printf("Enter the %d numbers:\n",n);
        for(int i=0; i<n; i++){
            printf("\tarr[%d]: ",i);
            scanf("%d",&arr[i]);
        }

        //Original list display
        printf("\nThe list is: [");
        for(int i=0; i<n; i++){
            printf(" %d",arr[i]);
            if(i<n-1){
                printf(", ");
            }
        }
        printf("]");

        //prime number find logic
        int count, sum=0;
        for(int i=0; i<n; i++){
            count=0;
            for(int j=1; j<=arr[i]; j++){
                if(arr[i]%j==0){
                    count++;
                }
            }
            if(count==2){
                sum=sum+arr[i];
            }  
        }
        printf("\nThe sum is: %d",sum);

    }
    else{
        printf("Number of element cannot be 0.");
    }
}