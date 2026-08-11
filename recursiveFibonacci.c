#include<stdio.h>

int fib(int n){
    if (n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    printf("First 15 fibonacci numbers: \n");
    for(int i=0; i<15; i++){
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}