#include <stdio.h>

int main()
{
    int i, j, M, N;
    printf("Enter rows: ");
    scanf("%d", &M);
    printf("Enter cols: ");
    scanf("%d", &N);

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M - i; j++)
            printf(" ");

        for(j=1; j<=N; j++)
        {
           if(i==1||i==M||j==1||j==N)
            printf("*");
        else
            printf(" ");
        }

        printf("\n");
    }
}

