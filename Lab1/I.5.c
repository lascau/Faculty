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

    //a)
    printf("Square root of number1: %f\n", sqrt(number1));
    //printf("Square root of number1: %f\n", pow(number1, 0.5));

    //b)
    printf("Square root of number2: %f\n", sqrt(number2));
    //printf("Square root of number2: %f\n", pow(number2, 0.5));

    int inverseOfNumber1 = 0;
    int inverseOfNumber2 = 0;

    //c)
    while (number1 > 0){
        inverseOfNumber1 = inverseOfNumber1 * 10 + number1 % 10;
        number1 = number1 / 10;
    }

    //d)
    while (number2 > 0){
        inverseOfNumber2 = inverseOfNumber2 * 10 + number2 % 10;
        number2 = number2 / 10;
    }

    printf("Inverse of number1: %d\n", inverseOfNumber1);
    printf("Inverse of number2: %d\n", inverseOfNumber2);

    return 0;
}
