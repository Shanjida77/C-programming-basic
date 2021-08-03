#include <stdio.h>
int main()
{
    int number, hours;
    float amount;

    scanf("%d %d %f", &number, &hours, &amount);
    printf("Number = %d\n", number);
    printf("Salary = U$ %.2f", hours * amount);
    return 0;
}
