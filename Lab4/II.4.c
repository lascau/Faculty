#include <stdio.h>
#include <stdlib.h>

void FindMinMax(int A[], int *min, int *max){

     int idx;

     for (idx = 1; idx < 9; idx++){

        if (A[idx] > *max)
            max = &A[idx];

        if (A[idx] < *min)
            min = &A[idx];
     }

    printf("%d %d", *min, *max);
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    FindMinMax(A, &A[0], &A[0]);

    return 0;
}
