#include<stdio.h>

int power(int x, int n);

int main(){
    int x,n;
    printf("Enter number and it's power: ");
    scanf("%d %d",&x,&n);

    printf("\n%d^%d=%d",x,n,power(x,n));
    return 0;
}

int power(int x, int n){
    int e;
    if(n==1){
        return x;
    }
    else{
        e=x*power(x,n-1);
    }
    return e;
}