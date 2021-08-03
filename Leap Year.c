#include<stdio.h>
int main()
{
    int year, Leap;

    printf("Enter Year: ");
    scanf("%d",&year);

    Leap=((year%400==0) || ((year%4==0) && (year%100!=0)));

    switch(Leap)
    {

    case 1:
        printf("This is a Leap Year.");
        break;

    case 0:
        printf("This is Not a Leap Year.");
        break;

    default:
        printf("Invalid");
        break;

    }

    return 0;
}
