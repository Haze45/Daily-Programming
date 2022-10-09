#include<stdio.h>
int main()
{
    double first, second,temp;
    printf("Enter first number : ");
    scanf("%f",&first);
    printf("Second second number: ");
    scanf("%f",&second);
    temp = first;
    first = second;
    second = temp;
    printf("\nAfter swapping first numbers : %.2f\n",first);
    printf("\nAfter swapping second numbers : %.2f\n",second);
}