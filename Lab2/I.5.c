#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main()
{
    int number;
    int i;

    printf("number = ");
    scanf("%d", &number);

    //a)
    int v[32];
    int index = 0;
    int aux = number;

    while (aux > 0){
        v[++index] = aux % 2;
        aux = aux / 2;
    }

    printf("Base 2: ");

    for (i = index; i > 0; i--)
        printf("%d", v[i]);
    printf("\n");

    //b)
    int base2to10 = 0;
    int exponentOf2 = 0;

    for (i = 1; i <= index; i++){
        base2to10 += v[i] * (1 << exponentOf2);
        exponentOf2++;
    }

    printf("Base 2 to 10: %d\n", base2to10);

    //c
    int k;

    printf("k = ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
        if (isPrime(i))
            printf("%d ", i);

    return 0;
}

int isPrime(int n){
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= n/2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
