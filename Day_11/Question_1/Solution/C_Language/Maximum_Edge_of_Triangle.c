#include <stdio.h>
#include <conio.h>

int edge(int x, int y)
{

    int c = 0;
    c = (x + y) - 1;
    printf("Maximum range of third side of triangle is %d", c);
}
int main()
{
    int a, b;
    printf("Enter the Two side of triangle : ");
    scanf("%d %d", &a, &b);
    edge(a, b);
}