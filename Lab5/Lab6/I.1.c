#include <stdio.h>
#include <stdlib.h>

char *strcpy_array(char dest[], char src[]){
    int i;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];

    return dest;
}

char *strcpy_pointer(char *dest, char *src){
    int i;

    for (i = 0; *(src + i); i++)
        *(dest + i) = *(src + i);

    return dest;
}

int main()
{

    return 0;
}
