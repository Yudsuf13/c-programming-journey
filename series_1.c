// Write a program to add first seven terms of the following series using a for loop. 1/1! + 2/2! + 3/3! +......

#include<stdio.h>
int main(){
    float sum=0;
    float d;
    for(int i=1; i<=7; i++){
        printf(" %d/%d!", i, i);
        if(i!=7){
            printf(" + ");
        }
    }
    printf(" = ");
    for(int i=1; i<=7; i++){
        d=1;
        for(int j=i; j>=1;j--){
            d*=j;
        }
        sum+=i/d;
    }
    printf("%f",sum);
}