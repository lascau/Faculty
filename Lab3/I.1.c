#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    printf("range of signed CHAR: (%d, %d)/(%d, %d)\n",CHAR_MIN, CHAR_MAX, -(1 << 7), (1 << 7) - 1);
    printf("range of unsigned CHAR: (0, %d)/(0, %d)\n",UCHAR_MAX, (1 << 8) - 1);

    printf("range of signed SHORT: (%d, %d)/(%d, %d)\n",SHRT_MIN, SHRT_MAX, -(1 << 15), (1 << 15) - 1);
    printf("range of unsigned SHORT: (0, %d)/(0, %d)\n",USHRT_MAX, (1 << 16) - 1);

    printf("range of signed INT: (%d, %d)/(%d, %d)\n",INT_MIN, INT_MIN, -(1 << 31), (1 << 31) - 1);
    printf("range of unsigned INT: (0, %ud)/(0, %ud)\n",UINT_MAX, (1 << 32) - 1);

    printf("range of signed LONG: (%lld, %lld)/(%ld, %ld)\n",LONG_MIN, LONG_MAX, -(1 << 63), (1 << 63) - 1);
    printf("range of unsigned LONG: (0, %ulld)/(0, %ulld)\n",ULONG_MAX, (1 << 64) - 1);

    return 0;
}
