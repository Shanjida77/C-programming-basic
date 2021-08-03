#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    int space=rows-1;
    for(i=rows; i>=1; --i)
    {
        for(j=0; j<space; j++)
            printf(" ");
        for(j=0; j<i; j++)
            printf("* ");
        printf("\n");
        space++;
    }
}
