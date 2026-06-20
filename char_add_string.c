#include<stdio.h>
#include<string.h>
int main(){
    char given_string[]="Nitika";
    //User input ask
    int index;
    char value;
    printf("\n[Mind you index starts from 0 not 1!]\nIndex you want to insert in %s: ",given_string);
    scanf("%d",&index);

    printf("\nValue you want to insert: ");
    scanf(" %c",&value);

    int len=strlen(given_string);
    
    char new_string[len+1];
    
    for(int i=0; i<len+1; i++){
        if(i>=index){
            new_string[i]=value;
            value=given_string[i];
            new_string[i+1]=value;
        }
        else{
            new_string[i]=given_string[i];
        }
    }

    printf("Given String: %s\n",given_string);
    printf("New String: %s",new_string);

}