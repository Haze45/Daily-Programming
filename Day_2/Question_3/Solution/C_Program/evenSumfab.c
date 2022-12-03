#include <stdio.h>
#include <stdlib.h>
void pattern(n)
{
   int i,j;
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
