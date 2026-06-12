/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.*/

#include<stdio.h>
int main()
{
    int total_hour_worked, over_time_pay;
    int i=1;
    while(i<=10){
        printf("\nEmployee: %d\tTotal worked hours: ",i);
        scanf("%d",&total_hour_worked);
        if(total_hour_worked>40){
            over_time_pay=(total_hour_worked-40)*120;
        }
        else{
            over_time_pay=0;
        }
        printf("Over time worked: %d hours\tOver time pay: Rs. %d",(total_hour_worked>40) ? (total_hour_worked-40) : 0,over_time_pay);
        i++;
    }
    return 0;
}