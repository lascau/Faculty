#include <stdio.h>
#include <stdlib.h>
#define MAX 100005

int main()
{
   int A[MAX];
   int max;
   int min;
   int n;

   printf("n = ");
   scanf("%d", &n);

   int i;
   for (i = 1; i <= n; ++i){
       printf("A[%d] = ", i);
       scanf("%d", &A[i]);
    }

    max = A[1];
    min = A[1];
    for (i = 2; i <= n; ++i){
        if (A[i] > max)
            max = A[i];
        if (A[i] < min)
            min = A[i];
    }

   printf ("min = %d\nmax = %d", min, max);
   return 0;
}
