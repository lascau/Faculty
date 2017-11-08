#include <stdio.h>
#include <stdlib.h>
#define MAX 100005

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Sort(int *A, int n)
{
    int isSorted = 0;
    int i;
    while (!isSorted){

        isSorted = 1;

        for (i = 0; i < n-1; i++)
            if (*(A + i) > *(A + i + 1))
            {
                Swap(A + i, A + i + 1);
                isSorted = 0;
            }
    }
}


int isArithmeticProgression(int *A, int n)
{
    int r = *(A + 1) - *A;
    int i;

    for (i = 1; i < n-1; i++)
        if (*(A + i + 1) - *(A + i) != r)
            return 0;

    return r;
}

int main()
{
    int X[MAX];
    int n;
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &X[i]);

    Sort(X, n);

    if (isArithmeticProgression(X, n))
        printf("The terms are in arithmetic progression and their ratio is: %d", *(X + 1) - *X);
    else
        printf("The terms are not in arithmetic progression!");

    return 0;
}
