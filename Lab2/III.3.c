#include <stdio.h>
#include <stdlib.h>

int power(int base,int exponent){
      return exponent == 0?  1 : base * power(base, exponent - 1);
}

int main()
{
    int a;
    int b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("%d", power(a, b));

    return 0;
}
