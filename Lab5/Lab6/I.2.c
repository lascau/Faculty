#include <stdio.h>
#include <stdlib.h>

int strlen_array(char array[]){
    int strlen = 0;

    while (array[strlen])
        strlen++;

    return strlen;
}

int strlen_pointer(char *strp){
    int strlen = 0;

    while (*(strp + strlen))
        strlen++;
    return strlen;
}

int main()
{
    printf("%d", strlen_pointer("ANA"));
    return 0;
}
