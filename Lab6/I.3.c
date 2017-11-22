#include <stdio.h>
#include <stdlib.h>

char *strcat(char *s, char *t){
    int i = 0;
    int j = 0;

    while (*(s + j))
        j++;

    i = j;
    j = 0;

    while (*(t + j))
    {
        *(s + i) = *(t + j);
        i++;
        j++;
    }

    *(s + i) = '\0';

    return s;
}


int main()
{
    char s[] = "Ana";
    char t[] = "Maria";

    strcat(s, t);

    printf("%s", s);

    return 0;
}
