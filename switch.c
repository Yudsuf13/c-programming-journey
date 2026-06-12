/* Write a menu driven program to: i. Reverse a number, ii. Find sum of digits, iii. Check prime, iv. Exit.*/
#include<stdio.h>
int main(){
    int user_choice, num, l_digit, temp;
    do{
    printf("\nDear User, Please selcct one of the following number-labeled operation you would like to execute: \n1.\tReverse a number\n2.\tFind sum of digits\n3.\tCheck prime\n4.\tExit\n");
    scanf("%d", &user_choice);

    switch(user_choice){
        case 1:{
        printf("\nYou have selected operation: Reverse a number.\nEnter the number you want to reverse: ");
        scanf("%d",&num);
        temp=num;
        printf("\nThe reverse of %d is: ",temp);
        if(num==0){
            printf("0");
        }
        while(num!=0){
            l_digit=num%10;
            printf("%d",l_digit);
            num=num/10;
        }
        break;}

        case 2:{
        int sum=0;
        printf("\nYou have selected operation: To find the sum of digits.\nEnter the digits you want to find sum of: ");
        scanf("%d",&num);
        temp=num;
        while(num!=0){
            l_digit=num%10;
            sum+=l_digit;
            num=num/10;
        }
        printf("\nThe sum of entered digits is: %d is %d",temp,sum);
        break;}

        case 3:{
        int i=1,count=0;
        printf("\nYou have selected operation: To check for prime number.\nEnter the number you want to check.[Though, please be mindful not to enter 0 or 1 number. Thank you!]: ");
        scanf("%d",&num);
        while(i<=num){
            if(num%i==0) count++;
            i++;
        }
        if(count==2){
            printf("\nThe number %d is prime.",num);
        }
        else{
            printf("\nThe number %d is not prime.", num);
        }
        break;}
    }
    }while(user_choice!=4);
}
