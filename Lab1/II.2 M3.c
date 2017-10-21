#include <stdio.h>
#include <stdlib.h>
#define SELECT2(UC, N) UC & POW2[N - 1]? 1 : 0;

const int POW2[] = {1, 2, 4, 8, 16, 32, 64, 128};

int main()
{
   unsigned char uc;
   int n;
   int nth_bit;

   scanf("%c", &uc);
   scanf("%d", &n);

   nth_bit = SELECT2(uc, n);
   printf("%d", nth_bit);
   return 0;
}
