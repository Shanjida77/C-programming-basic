#include<stdio.h>
#include<math.h>

int main()
{

    double area, radius, perimeter;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    printf("Area of the circle: %.1lf", area);
    printf("\nPerimeter of the circle: %.1lf", perimeter);
    return 0;

}

