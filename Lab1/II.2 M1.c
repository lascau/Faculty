#include <stdio.h>
#include <stdlib.h>
#define SELECT(UC, N) (UC >> (N - 1)) & 1

//'a' - ascii code = 97
//1100001

int main()
{
   unsigned char uc;
   int n;
   int nth_bit;

   scanf("%c", &uc);
   scanf("%d", &n);

   nth_bit = SELECT(uc, n);
   printf("%d", nth_bit);

    return 0;
}
