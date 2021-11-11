#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if(num < 2)
        return 0;
    int max = sqrt(num);
    for(int i = 2; i <= max; i++)
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}

void primeSum(int low, int high)
{
    int i;
    while(low <= high)
    {
        i = 2;
        while(i < low)
        {
            if(isPrime(i) && isPrime(low - i) && (low-i) >= i)
                printf("%d: Can be written as %d + %d\n",low,i,low-i);
            i++;
        }
        low++;
    }
}

int main(void)
{
    int low, high;
    printf("Enter range: ");
    scanf("%d%d",&low,&high);
    primeSum(low,high);
    return 0;
}
