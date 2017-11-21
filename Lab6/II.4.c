#include <stdio.h>
#include <stdlib.h>

int find_largest(int *a, int n){
    int max;
    int index;

    max = *a;
    for (index = 1; index < n; index++)
        if (*(a + index) > max)
            max = *(a + index);

    return max;
}

int main()
{

    int* A;
    int length;
    int i;

    scanf("%d", &length);
    //A = (int *)malloc(length * sizeof(int));

    for (i = 0; i < length; i++)
        scanf("%d", A + i);

    printf("%d", find_largest(A, length));

    return 0;
}
