//Write a program to calculate the sum of the digits in its main diagonal.

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

    //sum of the diagonal matrix elements
    int sum=0;
    int limit= (row<col)?row:col;
    for(int i=0; i<limit; i++){
        sum+=matrix[i][i];
    }
    printf("\n\nSum: %d",sum);
}