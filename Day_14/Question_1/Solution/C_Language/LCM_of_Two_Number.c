#include <stdio.h>
int main()
{
    int n1, n2, maxNum;
    printf("Program to find LCM of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    maxNum = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (maxNum % n1 == 0 && maxNum % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, maxNum);
            break;
        }
        ++maxNum;
    }
    return 0;
}