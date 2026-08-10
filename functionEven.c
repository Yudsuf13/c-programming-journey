#include<stdio.h>

int checkEven(int a){
    int x=a%2;
    return x;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if( checkEven(n)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}