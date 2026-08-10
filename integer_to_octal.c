// Write a program to receive an integer and find its octal equivalent. (Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn’t become zero, then write the remainders obtained in reverse direction.)
#include<stdio.h>
int main(){
    int user_input, temp, reverse_sum=0, count=0;
    printf("Enter an integer: ");
    scanf("%d",&user_input);

    while(user_input!=0){
        temp=user_input%8;
        
        if(reverse_sum==0 && temp==0){
            count++;
        }

        reverse_sum=reverse_sum*10+temp;
        user_input=user_input/8;        
    }

    printf("%d",reverse_sum);

    while(count!=0){
        printf("0");
        count--;
    }
    
}