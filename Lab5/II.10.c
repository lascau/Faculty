#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayVertical(char *s1, char *s2, char *s3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < strlen(s1) || j < strlen(s2) || k < strlen(s3))
    {
        if (i < strlen(s1))
            printf("%c ", *(s1 + (i++)));
        else
            printf("  ");

        if (j < strlen(s2))
            printf("%c ", *(s2 + (j++)));
        else
            printf("  ");

        if (k < strlen(s3))
            printf("%c ", *(s3 + (k++)));
        else
            printf("  ");

      printf("\n");
    }
}

int main()
{
    displayVertical("CAT", "BISON",  "DOG");
    return 0;
}
