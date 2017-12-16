#include <stdio.h>
#include <stdlib.h>

int isPrime(int x){
    int i;
    if (x == 1)
        return 0;
    for (i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    int i = 1;
    int j = 1;
    scanf("%d", &n);

    for (;;)
    {
        int k;
        int copie = i;

        if (isPrime(i))
        {
            for (k = 1; k <= copie; k++)
            {
                printf("%d ", k);
                j++;
                if (j == n + 1) break;
            }
        }
        else
        {
            for (k = 1; k <= copie; k++)
            {
                printf("%d ", copie);
                j++;
                if (j == n + 1) break;
            }
        }
     if (j == n + 1) break;
     i++;
  }

    return 0;
}
