#include <stdio.h>

int main()
{

    int n,last,first,sum;

    scanf("%d",&n);
    first = n;
    last = n % 10;

    while(first>=10)
    {
    first /=10;
    }
    sum=first+last;
    printf("First = %d\nLast = %d\nSum = %d", first, last,sum);

}
