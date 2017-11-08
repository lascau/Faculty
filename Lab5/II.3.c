#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int counter = 1;
    int i;
    int j;

    scanf("%d", &n);

    for (i = 1; counter <= n; i++)
        for (j = 1; counter <= n && j <= i; j++)
        {
            printf("%d ", j);
            counter++;
        }

    return 0;
}
