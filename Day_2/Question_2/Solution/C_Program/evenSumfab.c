#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x1 = 1, x2 = 1, x3 = 2, num_sum = 0 ,n;
    printf("Enter the number of terms = ");
    scanf("%u",&n);
    while (x3 < n) {
    x3 = x1 + x2;
    num_sum += x3 * !(x3%2);
    x1 = x2;
    x2 = x3;
  }
  printf("%u\n", num_sum);
  return 0;
}
