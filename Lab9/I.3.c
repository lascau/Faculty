#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinarySearch(char *string, int length, char letter){

    int st = 0;
    int dr = length - 1;
    while (st <= dr){
        int mij = (st + dr) / 2;
        if (*(string + mij) == letter)
            return 1;
        else if (*(string + mij) < letter)
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return 0;
}

int main()
{
    char *string;
    char letter;
    int length;
    int i;
    scanf("%c", &letter);
    scanf("%d", &length);
    string = (char *) malloc(sizeof(char) * length);
    for (i = 0; i <= length; i++)
        scanf("%c", string + i);
    *(string + length + 1) = '\0';
    //printf("%s", string);
    printf("%d", BinarySearch(string, length, letter));
    free(string);
    return 0;
}
