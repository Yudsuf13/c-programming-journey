// Write a program to compute and display the sum of each row individually for a matrix.


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

    //sum of the row of matrix elements
    int row_sum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            row_sum+=matrix[i][j];
        }
        printf("\nRow %d: Sum is %d.\n",i,row_sum);
        row_sum=0;
    }
}