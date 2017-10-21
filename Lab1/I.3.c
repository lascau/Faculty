#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char FirstName[50];
    char LastName[50];

    scanf("%s", &FirstName);
    scanf("%s", &LastName);

    int i;
    for (i = 0; i < strlen(FirstName); i++)
        if (FirstName[i] >= 'a' && FirstName[i] <= 'z')
            FirstName[i] = FirstName[i] - 32;

    for (i = 0; i < strlen(LastName); i++)
        if (LastName[i] >= 'A' && LastName[i] <= 'Z')
            LastName[i] = LastName[i] + 32;

    printf("%s %s", FirstName, LastName);

    return 0;
}
