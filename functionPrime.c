#include<stdio.h>
int checkPrime(int a){
    if (a <= 1)
        return 0;

    for(int i=2; i<=(a/2); i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (checkPrime(n)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}