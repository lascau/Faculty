#include <stdio.h>
#include <stdlib.h>

void minmax(int a[], int n, int *min, int *max){

    int index;

    min = &a[0];
    max = &a[0];

    for (index = 1; index < n; index++)
    {
        if (a[index] < *min)
            min = &a[index];
        if (a[index] > &max)
            max = &a[index];
    }

    printf("%d %d", *min, *max);
}
int main(){

    return 0;
}
