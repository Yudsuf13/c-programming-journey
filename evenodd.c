#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number, dear User: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("The number %d is even, User!", num);
    }
    else
    {
        printf("The number %d is odd, User!", num);
    }
}