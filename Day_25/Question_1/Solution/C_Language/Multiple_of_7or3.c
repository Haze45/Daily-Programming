#include <stdio.h>
#include <stdlib.h>
int test(int);
int main(void)
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    test(x);
}
int test(int n)
{
    if (n % 3 == 0 && n % 7 == 0)
    {
        printf("7 and 3 is multiple of %d", n);
    }

    else if (n % 3 == 0)
    {
        printf("3 is multiple of %d", n);
    }

    else if (n % 7 == 0)
    {
        printf("7 is multiple of %d", n);
    }
    else
    {
        printf("7 and 3 is not multiple of %d", n);
    }
}