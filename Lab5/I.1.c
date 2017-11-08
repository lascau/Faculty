#include <stdio.h>
#include <stdlib.h>
#define MAX 100005

int main()
{
    int x[MAX];
    int answer = 0;
    int n;
    int idx;

    scanf("%d", &n);
    for (idx = 0; idx < n; idx++)
        scanf("%d", &x[idx]);

    for (idx = 1; idx < n-1; idx++)
        if (x[idx] == (x[idx - 1] + x[idx + 1]) / 2)
            answer++;

    printf("%d", answer);

    return 0;
}
