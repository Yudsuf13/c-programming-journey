#include<stdio.h>

int main(){
    int pressure, safe_limit=100;
    char status;

    printf("Enter the pressure level, Dear User: ");
    scanf("%d",&pressure);

    status=pressure>safe_limit?'D':'S';

    printf("%c",status);

    return 0;
}