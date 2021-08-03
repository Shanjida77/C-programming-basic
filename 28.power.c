#include <stdio.h>

int main()
{
    int i, a, b, power=1;
    scanf("%d", &a);
    scanf("%d",&b);

    for(i=1; i<=b; i++)
    {
        power *= a;
    }
    printf("%d ^ %d = %d", a, b, power);
    return 0;
}
