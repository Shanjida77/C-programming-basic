#include<stdio.h>

int main()
{
    int num;
    float temp, sqrt;

    printf("Enter the number: ");
    scanf("%d", &num);

    sqrt = num / 2;
    temp = 0;

    while(sqrt != temp)
    {
        temp =  sqrt;
        sqrt = ( num/temp + temp) / 2;
    }

    printf("The square root of '%d' is '%.2f'", num, sqrt);
    return 0;
}
