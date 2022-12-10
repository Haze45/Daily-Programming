#include<stdio.h>
int main()
{
    int n,a=0,b=0,i;
    printf("Enter the number = ");
    scanf("%d",&n);
    a=n/2;
    if(n==1||n==0)
    {
        b=1;
    }
    for(i=2;i<=a;i++)
    {
        if(n%i==0)
        {
            
            b=1;
            break;
        }

    }
    if(b==0) 
    {

        printf("Number is Prime Number");
    }
    else
    {
        printf("Number is not Prime Number");
    }
    
    return 0;
}