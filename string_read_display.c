

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
    int len;
    printf("\nList of names: \n");
    for(int i=0; i<n; i++){
        len= strlen(names[i]);
        for(int j=0; j<len; j++){
            printf("%c",names[i][j]);
        }
        printf("\n");
    }

}