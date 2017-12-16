#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    for (x = 2; x <= 60;  x += 2)
        printf("%d ", x);

    printf("\n");

    y = 2;
    while (y <= 60)
    {
        printf("%d ", y);
        y +=2;
    }
    printf("\n");

    z = 2;
    do
    {
        printf("%d ", z);
        z += 2;
    }while(z <= 60);

    return 0;
}
