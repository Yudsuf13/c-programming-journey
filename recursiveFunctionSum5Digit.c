//A 5-digit positive integer is entered through the keyboard, write a recursive function to calculate sum of digits of the 5-digit number.

#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter 5 digits number: \n");
    scanf("%d",&n);

    printf("The sum of %d digits: %d",n,sum(n));
    return 0;
}

int sum(int x){
    int u=0;
    if(x==0){
        return 0;
    }
    else{
        int rem= x%10;
        u= rem + sum(x/10);
    }
    return u;
}