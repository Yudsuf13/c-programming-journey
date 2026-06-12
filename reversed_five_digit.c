/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not. */

#include<stdio.h>
int main()
{
    int input_num;
    printf("input 5 digit number user: ");
    scanf("%d",&input_num);

    int temp;
    temp=input_num;

    int last_digit, remaining_digits, reversed_number=0;

    for(int i=0;i<5;i++){
        last_digit=temp%10;
        reversed_number= reversed_number*10+last_digit;
        temp=temp/10;
    }
    if(reversed_number==input_num){
        printf("Input number: %d EQUALS TO Reversed number: %d", input_num, reversed_number);
    }
    else{
        printf("Input number: %d DOES NOT EQUAL TO Reversed number: %d", input_num, reversed_number);
    }
}