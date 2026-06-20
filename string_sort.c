//Write a program to read n names and display them sorted in alphabetical order.

#include<stdio.h>
#include<string.h>
int main(){

    int n;
    printf("Number of Elements?\n");
    scanf("%d",&n);

    //Read n names code
    char names[n][50];
    for(int i=0; i<n; i++){
        printf("\nName %d: ",i);
        scanf("%s",names[i]);
    }


    //display n names code
    printf("\nList of names: \n");
    for(int i=0; i<n; i++){
        printf("%s",names[i]);
        printf("\n");
    }


    //sorting code
    for(int i=0; i<n; i++){
        //if(strcmp(names[i],names[i+1])>0)
    }
    
}

