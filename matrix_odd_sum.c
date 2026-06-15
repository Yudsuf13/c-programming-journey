// Write a program to compute the sum of all odd elements in a matrix.

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

    //sum of the odd matrix elements
    int sum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]%2!=0)
            {
                sum+=matrix[i][j];
            }
        }
    }
    printf("\nOdd numbers sum of the matrix= %d",sum);

}