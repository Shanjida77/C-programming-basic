#include<stdio.h>

void subtractMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize])
{

    int matC[rowSize][colSize];
    printf("Subtraction of matC:\n");
    for(rowSize=0; rowSize<4; rowSize++)
    {
        for(colSize=0; colSize<4; colSize++)
        {
            matC[rowSize][colSize] = matA[rowSize][colSize] - matB[rowSize][colSize];
            printf("%d\t",matC[rowSize][colSize]);
        }
        printf("\n");
    }

}

int main()
{
    int matA[4][4],matB[4][4];
    int i,j;
    printf("Enter first matrix :\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            matB[j][i]=matA[i][j];
        }
    }

    printf("\nThe transpose of a matrix is : ");
    for(i=0; i<4; i++)
    {
        printf("\n");
        for(j=0; j<4; j++)
        {
            printf("%d\t",matB[i][j]);
        }
    }
    printf("\n");
    subtractMatrix(4,4,matA,matB);
    return 0;
}
