/*If a character is entered through the keyboard, write a program to
determine whether the character is a capital letter, a small case letter, a
digit or a special symbol. */

#include<stdio.h>
int main()
{
    char input;
    printf("Enter anything from your keyboard User: ");
    scanf("%c",&input);

    if(input>=48&&input<=57){
        printf("The entered character is digit.");
    }
    else if(input>=65&&input<=90){
        printf("The entered character is Capital Letter.");
    }
    else if(input>=97&&input<=112){
        printf("The entered character is Lower Case Letter.");
    }
    else{
        printf("The entered character is special symbol.");
    }

    return 0;
}