#include<stdio.h>
int main()
{
    int side_1, side_2, side_3;
    printf("Enter 3 sides of the triangle: ");
    scanf("%d%d%d",&side_1,&side_2,&side_3);

    if(side_1+side_2>side_3&&side_2+side_3>side_1&&side_1+side_3>side_2){
        if(side_1==side_2&&side_2==side_3){
            printf("The triangle is Equilateral.");
        }
        else if(side_1==side_2||side_2==side_3||side_1==side_3){
            printf("The triangle is Isoceles.");
        }
        else if((side_1*side_1==side_2*side_2+side_3*side_3)||(side_2*side_2==side_1*side_1+side_3*side_3)||(side_3*side_3==side_1*side_1+side_2*side_2)){
            printf("The triangle is Right-angled.");
        }
        else{
            printf("The triangle is scalene.");
        }
    }
    else{
        printf("The 3 sides are not valid measurement for being triangle's sides. Go away Kind user, and learn Triangle Inequality Theorem. ");
    }
}