#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number1;
    int number2;

    printf("number1 = ");
    scanf("%d", &number1);
    printf("number2 = ");
    scanf("%d", &number2);

    printf("Addition: %d\n", number1 + number2);
    printf("Substraction: %d\n", number1 - number2);
    printf("Multiplication: %d\n", number1 * number2);
    printf("Integer Division: %d\n", number1 / number2);
    printf("Real Division: %f\n", (float)number1 / number2);
    printf("Modulus: %d\n", number1 % number2);

    return 0;
}
