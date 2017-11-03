#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int *c;

     c = *a;
    *a = *b;
    *b =  c;
}

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}
