#include <stdio.h>
#include <stdlib.h>
#define SELECT1(UC, N) UC & (1 << (N - 1))? 1 : 0;

int main()
{
   unsigned char uc;
   int n;
   int nth_bit;

   scanf("%c", &uc);
   scanf("%d", &n);

   nth_bit = SELECT1(uc, n);
   printf("%d", nth_bit);

    return 0;
}
