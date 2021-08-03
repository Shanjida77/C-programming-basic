#include<stdio.h>

int main()
{
    char name;
    double salary, sold, total;

    scanf("%s %lf %lf", &name, &salary , &sold);
    total= salary + ((sold * 15) / 100);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}
