#include<stdio.h>

int main()

{
    double triangle, circle, trapezium, square, rectangle;
    double  A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle=((1.0 / 2) * A * C);
    circle=(3.14159 * C * C);
    trapezium=(((A + B) / 2) * C);
    square=(B * B);
    rectangle=(A * B);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);
    return 0;

}
