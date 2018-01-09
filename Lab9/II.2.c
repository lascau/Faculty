#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int i;

    int L[n1];
    int R[n2];

    for (i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (i = 0; i < n2; i++)
        R[i] = A[middle + i + 1];

        i = 0; //L
    int j = 0; //R
    int k = left; //A
    while (i < n1 && j < n2)
        if (L[i] <= R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];

    int l;
    if (i < n1)
        for (l = i; l < n1; l++)
            A[k++] = L[l];
    if (j < n2)
        for (l = j; l < n2; l++)
            A[k++] = R[l];
}

void MergeSort(int A[], int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;
        MergeSort(A, left, middle);
        MergeSort(A, middle + 1, right);
        Merge(A, left, middle, right);
    }
}

int main()
{
    int i, n, A[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    MergeSort(A, 0 , n - 1);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
