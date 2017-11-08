#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[100][100];
    int row;
    int col;
    int n;

    scanf("%d", &n);
    for (row = 0; row < n; row++)
        for (col = 0; col < n; col++)
            scanf("%d", &A[row][col]);

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
            printf("%d ", A[row][col]);
        printf("\n");
    }

    int productArea1 = 1;
    for (row = 0; row < n/2; row++)
        for (col = row+1; col < n-row-1; col++){
            productArea1 *= A[row][col];
            printf("%d ", A[row][col]);
            }
    printf("Area1:%d \n", productArea1);

    int sumArea2 = 0;
    for (col = 0; col < n/2; col++)
        for (row = col+1; row < n-col-1; row++){
            sumArea2  += A[row][col];
            printf("%d ", A[row][col]);
        }
    printf("Area2:%d \n", sumArea2);

    int productArea3 = 1;
    for (row = n-1; row >= n/2; row--)
        for (col = n-row; col <= row-1;  col++){
            productArea3 *= A[row][col];
            printf("%d ", A[row][col]);
        }
    printf("Area3:%d \n", productArea3);

    int sumArea4 = 0;
    for (col = n-1; col >= n/2; col--)
        for (row = n-col; row <= col-1; row++){
                sumArea4 += A[row][col];
                printf("%d ", A[row][col]);
        }
    printf("Area4:%d\n", sumArea4);

    return 0;
}
