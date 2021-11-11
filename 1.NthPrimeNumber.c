#include <stdio.h>
#include <math.h>


int checkPrime(int n)
{
    int a = 2;

    for(int i = 2; i < n; i++)
    {
        if( (n % i) == 0 )
        {
            return 0;
            break;
        }
        a++;
    }

    if( a == n )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int nthPrime(int n)
{
    int p = 2;
    int c = 0;

    while(c != n)
    {
        if(checkPrime(p))
        {
            c++;
        }
        p++;
    }

    return (p-1);
}

int main()
{
    int n ;
    printf("Enter the position of prime number: ");
    scanf("%d",&n);

    printf("%ith prime number is: %d\n", checkPrime(n),nthPrime(n));
}
