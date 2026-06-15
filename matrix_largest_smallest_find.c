//Write a program to find the biggest and smallest element within an M × N matrix.

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

    //largest smallest logic
    int min=matrix[0][0], max=matrix[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
    }
    printf("\nMax: %d, Min: %d",max,min);
}