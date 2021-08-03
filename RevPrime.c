#include<stdio.h>


int main()
{
    int N, i, j, isPrime, n;
    printf("Enter the value of N\n");
    scanf("%d",&N);

    printf("Prime no. from %d to %d :", 1, N);

    for(i = N; i >=2; i--)
    {
        isPrime = 0;

        for(j = 2; j <= i/2 ; j++)
        {
            if(i % j == 0)
            {
                isPrime = 1;
                break;

            }
        }
        if(isPrime==0)
            printf("%d ",i);
    }
}
