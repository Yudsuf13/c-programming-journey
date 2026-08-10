// Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered using """"while""""" loop only

#include<stdio.h>
int main(){
    int user_num=0, count_negative=0, count_positive=0, count_zero=0, status;
    printf("Enter list of numbers: \n[To stop entering number just press anything other than +,-, Enter, or numbers]\n");
    status=scanf("%d",&user_num);
    while(status!=0){
        if(user_num<0){
            count_negative++;
        }
        else if(user_num==0){
            count_zero++;
        }
        else {
            count_positive++;
        }
        status=scanf("%d",&user_num);
    }
    printf("\nZero count= %d, Positive count= %d, Negative count= %d",count_zero, count_positive, count_negative);
}