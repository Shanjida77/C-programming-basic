#include<stdio.h>

void addMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize])
{

    int matC[rowSize][colSize];
    for(rowSize=0; rowSize<3; rowSize++)
    {
        for(colSize=0; colSize<3; colSize++)
        {
            matC[rowSize][colSize] = matA[rowSize][colSize] + matB[rowSize][colSize];
            printf("%d\t",matC[rowSize][colSize]);
        }
        printf("\n");
    }

}

int main()
{
    int matA[3][3],matB[3][3];
    int i,j;
    printf("Enter first matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter second matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }
    addMatrix(3,3,matA,matB);
    return 0;
}
