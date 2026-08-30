#include<stdio.h>
int main(){
    //Assume total subjects are 10 for now
    int class, failed_subjects;

    printf("Class obtained by student and the number of failed subjects: ");
    scanf("%d %d",&class,&failed_subjects);

    switch(class){
        case 1:
        if(failed_subjects>3){
            printf("Grace marks: None");
        }
        else{
            printf("Grace marks: %d",5*failed_subjects);
        }
        break;
        case 2:
        if(failed_subjects>2){
            printf("Grace marks: None");
        }
        else{
            printf("Grace marks: %d", 4*failed_subjects);
        }
        break;
        case 3:
        if(failed_subjects>1){
            printf("Grace marks: None");
        }
        else{
            printf("Grace marks: 5 marks");
        }
        break;
    }
}