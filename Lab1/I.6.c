#include <stdio.h>
#include <stdlib.h>
#define SUM(A, B) A + B;

int main()
{
    int number1;
    int number2;
    int sum;

    printf("number1 = ");
    scanf("%d", &number1);
    printf("number2 = ");
    scanf("%d", &number2);

    sum = SUM(number1, number2);
    printf("sum = %d", sum);

    return 0;
}
