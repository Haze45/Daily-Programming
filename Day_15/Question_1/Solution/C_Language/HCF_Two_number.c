#include <stdio.h>
int main()
{
    int n1, n2, i, hcf;
    printf("Program to find HCF or GCD of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    printf("H.C.F of number %d and %d is %d", n1, n2, hcf);
    return 0;
}