#include <stdio.h>
#include <stdlib.h>

struct array{
    int n;
    int arr[1000];
};

int main()
{
    int nr;
    int i;
    int j;

    scanf("%d", &nr);
    struct array A[nr + 1];

    for (i = 0; i < nr; i++)
    {
        scanf("%d", &A[i].n);
        for (j = 0; j < A[i].n; j++)
            scanf("%d", &A[i].arr[j]);
    }

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < A[i].n; j++)
            printf("%d ", A[i].arr[j]);
       printf("\n");
    }

    return 0;
}
