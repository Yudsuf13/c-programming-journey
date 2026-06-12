#include<stdio.h>
int main(){
    int n;
    printf("Number of number you wanna find largest from? n = \n");
    scanf("%d",&n);
    int num[n];
    //run-time array initialization part
    for(int k=0; k<n; k++){
        printf("n[%d]: ",k);
        scanf("%d",&num[k]);
    }
    //To dismay the numbers list
    printf("\nThe %d numbers are: ",n);
    for(int s=0; s<n; s++){
        printf("%d\t",num[s]);
    }
    //largest number logic
    int i=0;
    for(int j=1; j<n;j++){
        if(num[j]>num[i]){
            i=j;
        }
    }
    printf("Largest number is: %d",num[i]);
    return 0;
}