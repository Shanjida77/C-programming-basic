#include<stdio.h>

int main()
{
    double a,b,c,d,e,avg;

    printf("Enter 5 numbers: ");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);

    avg = (a + b + c + d + e)/5;
    printf("Average is: %.2lf",avg);
}
