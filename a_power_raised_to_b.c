/*Two numbers are entered through the keyboard. Write a program to
find the value of one number raised to the power of another. */
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    int i=1,a_power_b=1;
    while(i<=b){
        i++;
        a_power_b*=a;
    }
    printf("%d raised to %d = %d",a,b,a_power_b);
    return 0;
}