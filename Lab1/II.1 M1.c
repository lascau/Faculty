#include <stdio.h>
#include <stdlib.h>
#define LSB(UC) UC & -UC

int main()
{
    unsigned char uc;
    int lsb;

    scanf("%c", &uc);

    printf("%d", LSB(uc));

    return 0;
}
