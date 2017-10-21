#include <stdio.h>
#include <stdlib.h>
#define LSB(UC)                                 \
                    while ((UC & POW2[i]) == 0) \
                        i++;                    \
                                                \
                    printf("%d", POW2[i]);      \


const int POW2[] = {1, 2, 4, 8, 16, 32, 64, 128};

int main()
{
    unsigned char uc;
    int lsb;
    int i = 0;

    scanf("%c", &uc);

    LSB(uc);

    return 0;
}
