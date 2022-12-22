#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    int i, len;
    // int alpha = 0, digit = 0, specialChar = 0, i;
    printf("C program to separate character \n");
    printf("Please Enter a String :  ");
    gets(str);
    len = strlen(str);
    printf("Printing Character of string\n");
    for (i = 0; i < len; i++)
    {
        printf("%c \n", str[i]);
    }
    return 0;
}