#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *Stack;
    char s[100000];
    int i;
    int sizeOfStack = 0;

    gets(s);
    Stack = (char *) malloc(strlen(s) * sizeof(char));

    for (i = 0; i < strlen(s); i++)
        *(Stack + (++sizeOfStack)) = s[i];

    while (sizeOfStack > 0){
        printf("%c", *(Stack + sizeOfStack));
        sizeOfStack--;
    }

    free(Stack);

    return 0;
}
