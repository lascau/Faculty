#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
    int i;
    for (i = 2; i <= n/2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int number;

    printf("number = ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("Number %d is prime", number);
    else
        printf("Number %d is not prime", number);

    return 0;
}
