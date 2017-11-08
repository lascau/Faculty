#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  //a)
  //Metoda 1
    char string[1000];
    int nrwords = 0;
    int i;

    gets(string);

    for (i = 0; i < strlen(string); i++)
        if (string[i] == ' ')
            nrwords++;

    printf("Nr of words: %d\n", ++nrwords);

 // Metoda 2
    char *p;
    char string[1000];
    int nrwords = 0;

    gets(string);

    p = strtok(string, " ");
    while (p != NULL){
        nrwords++;
        p = strtok(NULL, " ");
    }

    printf("%d\n", nrwords);

    //b)
    int fr[54];
    char ch;

    for (i = 0; i < strlen(string); i++)
        fr[string[i]]++;

    for (ch = 'A'; ch <= 'z'; ch++)
        printf("%d ", fr[ch]);

    return 0;
}
