//Write a program to read an M × N matrix from the user and print the sum of all elements.

#include<stdio.h>
int main(){
    int row, col;
    printf("Order of Matrix?\n");
    printf("\nM,N: ");
    scanf("%d%d",&row,&col);

    //runtime 2d array initialization
    int matrix[row][col];
    printf("\nEnter the Elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\tmatrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    //displaying the matrix
    for(int i=0; i<row; i++){
        printf("\nrow %d|",i);
        for(int j=0; j<col; j++){
            printf("\tcolumn %d: %d",j,matrix[i][j]);
        }
    }

    //sum of the matrix elements
    int sum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           sum+=matrix[i][j];
        }
    }
    printf("\n\nSum: %d",sum);


}