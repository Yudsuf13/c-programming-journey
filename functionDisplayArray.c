#include <stdio.h>

//function deifinition
void arrayDisplay(int *a, int size){
    for(int i=0; i<size; i++){
        printf("%d\t", a[i]); //a[i] is equivalent to *(a+i)
    }
}

// int arraySum(){

// }

int main(){
    int size=5, numArray[5]={9,8,7,6,5};
    arrayDisplay(numArray, size);

    // printf("\nThe sum is: %d",arraySum());
}