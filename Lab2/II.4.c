#include <stdio.h>
#include <stdlib.h>

struct Point{
    int x;
    int y;
}P;

int main()
{
    printf("x = ");
    scanf("%d", &P.x);
    printf("y = ");
    scanf("%d", &P.y);

    if (P.x > 0 && P.y > 0)
        printf("The quadrant 1");
    else if (P.x < 0 && P.y > 0)
        printf("The quadrant 2");
    else if (P.x < 0 && P.y < 0)
        printf("The quadrant 3");
    else
        printf("The quadrant 4");

    return 0;
}
