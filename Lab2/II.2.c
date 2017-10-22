#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, m, n, p;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    printf("p = ");
    scanf("%d", &p);

    int det = a * n - b * m;

    if (det == 0)
        printf("No solutions!");
    else{
       // int inverse11 = n / det;
        //int inverse12 = -b / det;
        //int inverse21 = -m / det;
        //int inverse22 = a /det;

        int x = (n * c) / det + (-b * p) / det;
        int y = (-m * c) / det + (a * p) / det;

       printf ("Solutions are: {%d, %d}", x, y);
    }

    return 0;
}
