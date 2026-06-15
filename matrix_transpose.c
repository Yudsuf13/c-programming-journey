// Transpose of the matrix
#include<stdio.h>
int main(){
    int row, col;
    printf("Order of Matrix?\n");
    printf("\nM,N: ");
    scanf("%d%d",&row,&col);

    //runtime 2d array initialization
    int mat_1[row][col];
 
    printf("\nEnter the Elements or Matrix 1:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\tmat_1[%d][%d]: ",i,j);
            scanf("%d",&mat_1[i][j]);
        }
        printf("\n");
    }
    


    //displaying the matrix
    printf("\nMatrix 1:");
    for(int i=0; i<row; i++){
        printf("\n[");
        for(int j=0; j<col; j++){
            printf("\t%d",mat_1[i][j]);
        }
        printf("]");
    }

    //Transpose of Matrix


}