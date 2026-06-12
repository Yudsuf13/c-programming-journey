#include<stdio.h>
int main()
{
    int year;
    printf("User! Enter a year to be checked for Leap year, won't you? ");
    scanf("%d",&year);

    if(year%4==0||year%400==0)
    {
        printf("The year %d is Leap Year.",year);
    }
    else{
        printf("Year %d is not Leap Year. NVM.", year);
    }
}