#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[1000];
    int B[1000];
    int C[1000];
    int lengthOfA;
    int lengthOfB;
    int idx;

    printf("Length of A is: \n");
    scanf("%d", &lengthOfA);

    for (idx = 1; idx <= lengthOfA; idx++)
        scanf("%d", &A[idx]);

    printf("Length of B is: \n");
    scanf("%d", &lengthOfB);

    for (idx = 1; idx <= lengthOfB; idx++)
        scanf("%d", &B[idx]);

    int i = 1;
    int j = 1;
    int lengthOfC = 0;

    while (i <= lengthOfA && j <= lengthOfB)
        if (A[i] < B[j])
            C[++lengthOfC] = A[i++];
        else if (B[j] < A[i])
            C[++lengthOfC] = B[j++];
        else
            C[++lengthOfC] = A[i++];

    if (i <= lengthOfA)
        for (idx = i; idx <= lengthOfA; idx++)
            C[++lengthOfC] = A[i++];

    if (j <= lengthOfB)
        for (idx = j; idx<= lengthOfB; idx++)
            C[++lengthOfC] = B[j++];

    for (idx = 1; idx <= lengthOfC; idx++)
        printf("%d ", C[idx]);

    return 0;
}
