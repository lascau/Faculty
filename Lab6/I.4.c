#include <stdio.h>
#include <stdlib.h>

int strend(char *s, char *t){
    int lengthOfS = 0;
    int lengthOfT = 0;
    int i;
    int j = 0;

    while (*(s + lengthOfS))
        lengthOfS++;

    while (*(t + lengthOfT))
        lengthOfT++;

    int start = lengthOfS - lengthOfT ;


    for (i = start; i < lengthOfS; i++)
    {
        if (*(s + i) != *(t + j))
            break;
        j++;
    }
    return (i == lengthOfS)? 1 : 0;

}

int main()
{

    char s[] = "Ana are mere";
    char t[] = "ere";

    /*
    char s[] = "mere";
    char t[] = "mere";
    */

    /*
    char s[] = "mere";
    char t[] = "m";
    */

    printf("%d", strend(s, t));

    return 0;
}
