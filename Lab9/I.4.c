#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int A[], int n)
{
    int sorted = 0;
    int i;
    while (!sorted)
    {
        sorted = 1;
        for (i = 0; i < n; i++)
            if (A[i] > A[i + 1])
            {
                sorted = 0;
                int aux = A[i];
                A[i] = A[i + 1];
                A[i + 1] = aux;
            }
    }
}

int main()
{
   int n, i, A[1000];
   scanf("%d", &n);
   for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
   BubbleSort(A, n);
   for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
