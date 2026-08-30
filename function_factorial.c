#include<stdio.h>

//fucntion prototype declaration
int fact(int);

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    printf("\nFactorial of %d=%d",num,fact(num)); //fucntion calling
    return 0;
}

// function definition
int fact(int a){
    int ans=1;
    for(int i=a; i>1; i--){
        ans*=i;
    }
    return ans;
} 