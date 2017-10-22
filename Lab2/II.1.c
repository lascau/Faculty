#include <stdio.h>
#include <stdlib.h>
#define MAX_n 100005
#define MIN(A, B) A < B? A : B

int main()
{
    int a[MAX_n];
    int n;
    int exponentOfBase2 = 0;
    int exponentOfBase5 = 0;

    printf("n = ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int index;
    for (index = 1; index <= n ; index++){
        int temp1 = a[index];
        int temp2 = temp1;

        while (temp1 % 2 == 0){
            exponentOfBase2++;
            temp1 = temp1 / 2;
        }

        while (temp2 % 5 == 0)
        {
            exponentOfBase5++;
            temp2 = temp2 / 5;
        }
    }

    printf("%d", MIN(exponentOfBase2, exponentOfBase5));

    return 0;
}
