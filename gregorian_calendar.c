/* According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    // Ask User for input year
    int input_year;
    printf("Dear User, Enter year: ");
    scanf("%d",&input_year);

    int total_in_btn_years;
    total_in_btn_years= abs(input_year-1900);

    //Calculation of total number of leap years in between
    int temp, leap_yrs_count=0;
    temp= input_year;

    int total_days;
    int remaining_days;

    if(input_year<1900){
        for(;temp<1900;temp++){
                if((temp%4==0)&&((temp%100!=0||temp%400==0))){
                    leap_yrs_count++;
                }
            }
        total_days= total_in_btn_years*365+leap_yrs_count;
        remaining_days=total_days%7;
            switch (remaining_days){
                case 0:
        printf("It's monday.");
        break;
        case 1:
        printf("It's sunday.");
        break;
        case 2:
        printf("It's saturday.");
        break;
        case 3:
        printf("It's friday.");
        break;
        case 4:
        printf("It's thursday.");
        break;
        case 5:
        printf("It's wednesday.");
        break;
        case 6:
        printf("It's tuesday.");
        break;
        default:
        printf("uh......? blame the coder.");
        break;
            }

        }
    else{
        temp = input_year-1;
        for(;temp>1900;temp--){
                if((temp%4==0)&&((temp%100!=0||temp%400==0))){
                    leap_yrs_count++;
                }
            }
        total_days= total_in_btn_years*365+leap_yrs_count;
        remaining_days=total_days%7;
            switch (remaining_days){
                case 0:
        printf("It's monday.");
        break;
        case 1:
        printf("It's tuesday.");
        break;
        case 2:
        printf("It's wednesday.");
        break;
        case 3:
        printf("It's thursday.");
        break;
        case 4:
        printf("It's friday.");
        break;
        case 5:
        printf("It's saturday.");
        break;
        case 6:
        printf("It's sunday.");
        break;
        default:
        printf("uh......? blame the coder.");
        break;
            }
        }


    return 0;
}