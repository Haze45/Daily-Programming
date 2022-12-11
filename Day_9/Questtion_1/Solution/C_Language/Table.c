#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Table of %d is\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,(n*i));
    }
    getch();
}