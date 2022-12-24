#include <stdio.h>
#include <conio.h>
#define PI 3.14
double area(double);

int main()
{
    double r;
    printf("Enter the radius of circle = ");
    scanf("%lf", &r);
    printf("Area of Circle = %lf", area(r));
}

double area(double r)
{
    return (PI * r * r);
}
