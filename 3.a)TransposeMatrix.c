#include<stdio.h>

void transposeTheMatrix(int row, int col, int matrix[row][col], int transposeMatrix[col][row])
{

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
}
void printMatrix(int row, int col, int mat[row][col])
{

    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t",mat[i][j] );
        }
        printf("\n");
    }
}
int main()
{

    int row, col;
    printf("Enter row and colum :\n");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    printf("Enter the matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("matrix[%d][%d]: ",i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    int transposeMatrix[col][row];
    printf("Original matrix: \n");
    printMatrix(row, col, matrix);

    printf("\n");


    transposeTheMatrix(row, col, matrix, transposeMatrix);
    printf("Transpose matrix: \n");
    printMatrix(row, col, transposeMatrix);
    return 0;
}
