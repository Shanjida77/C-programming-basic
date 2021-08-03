//Write a program to compute the following series using while loop: 4+11+18++....+n
#include<stdio.h>

int main()
{
    int n,x= 4,i = 1 ,sum=0;
    printf("Input Value of terms : ");
    scanf("%d",&n);

    while (i<=n)
    {   printf("%d ",x);
        x = x+7;
        sum=sum + x;
        i++;
    }
    printf("The sum of the series is %d ",sum);

    return 0;

}
