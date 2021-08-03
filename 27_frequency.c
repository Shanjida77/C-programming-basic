#include <stdio.h>

int main()
{
    long num;
    int digit,rem,count=0;

    scanf("%ld",&num);
    scanf("%d",&digit);

    while(num!=0)
    {

       rem=num%10;

       if(rem==digit)

       count++;

       num=num/10;
    }

printf("The digit %d present %d times ",digit,count);

    }


