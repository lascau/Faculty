#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10000];
    char *Stack;
    int i;
    int sizeOfStack = 0;
    int nr = 0;
    int nrlitere = 0;

    gets(s);
    Stack = (char *) malloc(strlen(s) * sizeof(char));

    for (i = 0; i < strlen(s); i++)
        if (strchr("?.,' ;:!", s[i]))
            nr++;

    for (i = 0; i < strlen(s); i++)
    {
        if (!strchr("?.,' ;:!", s[i]))
            nrlitere++;

        if ((strlen(s) - nr)% 2 == 1 && nrlitere == (strlen(s) - nr) / 2 + 1)
            continue;

        if (!strchr("?.,' ;:!", s[i])){
            if(s[i] != *(Stack + sizeOfStack))
                *(Stack + (++sizeOfStack)) = s[i];
            else if (sizeOfStack > 0)
                sizeOfStack--;
        }
    }

    if (sizeOfStack == 0)
        printf("%s este palindrom.", s);
    else
        printf("%s nu este palindrom.", s);

    free(Stack);

    return 0;
}
