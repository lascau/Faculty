#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char s[]){
    int nr = 0;
    int i;
    for (i = 0; i < strlen(s); i++)
        switch(strchr("0123456789 ,./?';:}]{[", s[i])? 1 : 0){
        case 1:
            nr++;
            break;
        case 0:
            break;
        };

return nr;
}

int main()
{
    char str[] = "aba.98";
    printf("%d", count(str));
    return 0;
}
