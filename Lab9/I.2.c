#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int v[], int n, int val){
    int st = 0;
    int dr = n - 1;
    while (st <= dr){
        int mij = (st + dr) / 2;
        if (v[mij] == val)
            return 1;
        else if (val > v[mij])
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return 0;
}

int main()
{
    int i, n, A[1000], val;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
     scanf("%d", &val);
     printf("%d", BinarySearch(A, n, val));
        return 0;
}

