#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int baseP;
    int baseQ;
    int number;
    int answer[32];
    int base10 = 0;
    int i = 0;
    int idx;

    scanf("%d%d%d", &number, &baseP, &baseQ);

    while (number > 0){

        base10 += (number % 10) * (int) pow(baseP, i++);
        number /= 10;
    }

    //printf("Base P to Base 10: %d\n", base10);

    i = -1;

    while (base10 > 0){

        answer[++i] = base10 % baseQ;
        base10 /= baseQ;
    }

    printf("Base10 to Base Q: ");

    idx = i;
    for (;idx >= 0; idx--)
        printf("%d", answer[idx]);

    return 0;
}
