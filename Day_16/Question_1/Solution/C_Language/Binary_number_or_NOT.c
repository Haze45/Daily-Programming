#include <stdio.h>
#include <conio.h>
int main()
{
    int a, num;
    printf("Please enter a number :");
    scanf("%d", &num);
    while (num > 0)
    {
        a = num % 10;
        if (a != 0 && a != 1)
        {
            printf("num is not binary");
            break;
        }
        num = num / 10;
        if (num == 0)
        {
            printf("num is binary");
        }
    }
    getch();
}