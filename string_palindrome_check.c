#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("\nEnter a string: ");
    scanf("%s",str);

    int len=strlen(str), palindrome=1;
    for(int i=0; i<len/2; i++)
    {
        if(str[i]!=str[len-i-1]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==0){
        printf("\nNot Palindrome");
    }
    else{
        printf("\n palindrome");
    }
}
