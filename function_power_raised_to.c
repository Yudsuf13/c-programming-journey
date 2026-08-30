#include<stdio.h>

int power(int, int);

int main(){
    int base, expo;
    printf("Enter base and power:");
    scanf("%d %d",&base, &expo);

    printf("\nThe %d raised to %d is %d.", base, expo, power(base, expo));
    return 0;
}

int power(int x, int y){
    int ans=1;
    for(int i=y; i>=1; i--){
        ans*=x;
    }
    return ans;
}