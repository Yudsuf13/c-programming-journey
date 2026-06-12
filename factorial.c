/*Write a program to find the factorial value of any number entered
through the keyboard. */
#include<stdio.h>
int main()
{
    int num, fac=1;
    printf("Enter number for factorial calculation: ");
    scanf("%d",&num);
    int i=0;
    printf("%d!=",num);
    while(i!=num){
        i++;
        fac=fac*i;
        printf("%d*",i);
    }
    printf("=%d",fac);
    return 0;
}