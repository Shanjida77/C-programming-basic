#include<stdio.h>

int main()
{

    double base, hypotenuse, height, area;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the hypotenuse: ");
    scanf("%lf", &hypotenuse);

    height = sqrt((pow(hypotenuse,2)-(pow(base,2))));
    area = 0.5 * base * height;

    printf("Height is: %.2lf", height);
    printf("\nArea of the circle: %.2lf", area);

    return 0;

}
