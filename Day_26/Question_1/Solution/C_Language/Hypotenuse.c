#include <stdio.h>
#include <math.h>
int main()
{
    double l, b, h;
    printf("Enter the number l and b : ");
    scanf("%lf %lf", &l, &b);
    h = sqrt(pow(l, 2) + pow(b, 2));
    printf("Hypotenuse of the Triangle = %lf", h);
}