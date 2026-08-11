#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x,y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);

    printf("Before Swapping: num1=%d num2=%d\n",x,y);
    swap(&x,&y);
    printf("After Swapping: num1=%d num2=%d",x,y);
}