//Write a user-defined function to find the sum of elements of an m × n matrix and return the sum to the calling function. 

#include<stdio.h>

// void arrayDisplay(); 

int arraySum(int rows, int cols, int (*a)[cols]){
    int sum=0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++){
            sum += *(*(a+i)+j); // equivalent to p[i][j]
        }
    }
    return sum;
}


int main()
{
    int m=5, n=2;
    int arr[5][2]={{1,2},{2,3},{3,4},{4,5},{5,6}};
    
    printf("Sum: %d", arraySum(m,n,arr));
}