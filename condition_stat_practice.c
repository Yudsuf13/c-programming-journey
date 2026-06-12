#include<stdio.h>
int main()
{
    int passcode;
    float retina_score;

    printf("Enter the passcode:");
    scanf("%d",&passcode);

    printf("Enter the retina_score:");
    scanf("%f",&retina_score);

    if(passcode==9999 && retina_score>8.5)
    printf("\nACCESS GRANTED: Vault Unlocked");
    else
    printf("\nACCESS DENIED: Authorities Dispatched");

    return 0;
}