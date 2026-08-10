//Write a program to print all prime numbers from 1 to 300. 

#include<stdio.h>
int main(){
    int count;
    for(int i=1; i<=300; i++){
        count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
            else{
                continue;
            }
        }
        if(count==2){
            printf("%d\t",i);
        }
    }
}