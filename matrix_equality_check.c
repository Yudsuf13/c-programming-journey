// Write a program to test whether two given matrices are strictly equal or not.
#include<stdio.h>
int main(){
    int row, col;
    printf("Order of Matrix?\n");
    printf("\nM,N: ");
    scanf("%d%d",&row,&col);

    //runtime 2d array initialization
    int mat_1[row][col];
    int mat_2[row][col];
    printf("\nEnter the Elements or Matrix 1:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\tmat_1[%d][%d]: ",i,j);
            scanf("%d",&mat_1[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the Elements for Matrix 2:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\tmat_2[%d][%d]: ",i,j);
            scanf("%d",&mat_2[i][j]);
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
    
    printf("\n\nMatrix 2:");
    for(int i=0; i<row; i++){
        printf("\n[");
        for(int j=0; j<col; j++){
            printf("\t%d",mat_2[i][j]);
        }
        printf("]");
    }

    //equality of matrix check
    int equal = 1;  // Assume equal

for(int i = 0; i < row && equal; i++) {
    for(int j = 0; j < col; j++) {
        if(mat_1[i][j] != mat_2[i][j]) {
            equal = 0;
            break;
        }
    }
}

if(equal == 1) {
    printf("\nMatrices are equal");
} else {
    printf("\nMatrices are not equal");
}
}