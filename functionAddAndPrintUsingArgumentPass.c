#include<stdio.h>
//function with no return type but void with arguments
void addAndPrint(int a, int b){
    int sum= a+b;
    printf("%d+%d=%d", a,b,sum);
}
int main(){
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    addAndPrint(x,y);//calling functions with arguments
    return 0;
}