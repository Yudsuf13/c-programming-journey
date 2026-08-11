//Write a program demonstrating passing 1D array elements to a function using a pointer and displaying/summing them. 

#include<stdio.h>

//fucntion declaration
void arrayDisplay(int *a, int size);
int arraySum(int *a, int size);

//function definition
void arrayDisplay(int *a, int size){
    for(int i=0; i<size; i++){
        printf("%d\t",a[i]); //pointer notation a[i]=*(a + i)
    }
}

int arraySum(int *a, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+= a[i]; // sum += *(a + i); Pointer notation
    }
    return sum;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;

    arrayDisplay(arr, size);
    printf("\nSum is: %d", arraySum(arr, size));
}