#include<stdio.h>
int main()
{
    int i=100, l_digit, temp, sum;
    while(i<=500){
        temp=i;
        sum=0;
        while(temp!=0){
            l_digit=temp%10;
            temp=temp/10;
            sum+= l_digit*l_digit*l_digit;
        }
        if(sum==i)
        {
            printf("%d\t",i);
        }
        i++;
    }
}