#include <stdio.h>
#include<stdlib.h>

int poz(int p, int u, int x[]){
    int piv, aux, k;
    piv = x[p];
    while (p < u){
        if (x[p] > x[u]) {
            aux = x[p];
            x[p] = x[u];
            x[u] = aux;
        }
       if (x[p] == piv)
              u--;
        else p++;
    }
    k = p;
    return k;
}

void QuickSort(int p, int u, int x[]){
    int k;
    if (p < u){
        k = poz(p, u, x);
        QuickSort(p, k-1, x);
        QuickSort(k+1, u, x);
    }
}

int main()
{
    int i, n, A[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    QuickSort(0, n - 1, A);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
