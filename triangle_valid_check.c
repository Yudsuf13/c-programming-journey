/*If the lengths of three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is valid or not.
The triangle is valid if the sum of two sides is greater than the largest of
the three sides. */

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle to be checked: ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1+s2>s3&&s2+s3>s1&&s1+s3>s2){
        printf("The triangle is valid.");
    }
    else{
        printf("Yaar, the measurements are not valid for triangle, what are you doing user. Shame on you!");
    }

    return 0;
}