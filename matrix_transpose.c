// Transpose of the matrix
#include<stdio.h>
int main(){
    int row, col;
    printf("Order of Matrix?\n");
    printf("\nM,N: ");
    scanf("%d%d",&row,&col);

    //runtime 2d array initialization
    int matrix[row][col];
 
    printf("\nEnter the Elements or Matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\tmatrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    


    //displaying the matrix
    printf("\nMatrix:");
    for(int i=0; i<row; i++){
        printf("\n[");
        for(int j=0; j<col; j++){
            printf("\t%d",matrix[i][j]);
        }
        printf("]");
    }

    //Transpose of Matrix
    int transpose[col][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    //displaying the transpose matrix
    printf("\nTransposed Matrix:");
    for(int i=0; i<col; i++){
        printf("\n[");
        for(int j=0; j<row; j++){
            printf("\t%d",transpose[i][j]);
        }
        printf("]");
    }

}