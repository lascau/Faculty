#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100005

int main()
{
    float sigma;
    int N;
    int x[MAX];
    long long s = 0;
    long long s2 = 0;

    printf("N = ");
    scanf("%d", &N);

    int i;
    for (i = 1; i <= N; i++){
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
        s = s + x[i];
        s2 = s2 + 1LL * x[i] * x[i];
    }

    sigma = sqrt( (1LL * N * s2 - 1LL * s * s) / (N * (N - 1)) );

    printf("Sigma = %f", sigma);

    return 0;
}
