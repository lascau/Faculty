#include <stdio.h>
#include <stdlib.h>

int isPerfect(int x){
    int sumOfDivisors = 0;
    int d;
    for (d = 1; d <= x/2; d++)
        if (x % d == 0)
            sumOfDivisors =  sumOfDivisors + d;

    return x == sumOfDivisors? 1 : 0;
}

int main()
{
    int i;
    for (i = 1; i <= 1000; i++)
        if (isPerfect(i)){
            printf("The factors of %d are: ", i);
            int j;
            for (j = 1; j <= i/2; j++)
                if (i % j == 0)
                    printf("%d ", j);
         printf("\n");
        }

    return 0;
}
