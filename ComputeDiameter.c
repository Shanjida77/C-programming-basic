#include<stdio.h>


double diameter(double r)
{
    return (2 * r);
}


double circumference(double r)
{
    return (2 * 3.14 * r);
}


double area(double r)
{
    return (3.14 * r * r);
}

int main()
{
    double r, d, c, Area;


    printf("Enter the radius of a circle: ");
    scanf("%lf", &r);

    d  = diameter(r);
    c = circumference(r);
    Area = area(r);

    printf("Diameter = %.2lf \n", d);
    printf("Circumference = %.2lf \n", c);
    printf("Area = %.2lf ", Area);

    return 0;
}
