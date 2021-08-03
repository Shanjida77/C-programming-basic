#include <stdio.h>

int main()
{

    int n,last,first,sum;

    scanf("%d",&n);
    first = n;
    last = n % 10;

    while(first>=10) //to count first-n>=10{n/=10}->fisrt=n
    {
    first /=10;
    }
    printf("First = %d\nLast = %d", first, last);

}
