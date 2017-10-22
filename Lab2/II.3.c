#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int delta;
    float x1;
    float x2;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;
    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else if (delta == 0)
        x1 = x2 = -b / (2 * a);
    else{
        printf("No solutions!!!");
        return 0;
    }
        printf("x1 = %f\nx2 = %f", x1, x2);

    return 0;
}
