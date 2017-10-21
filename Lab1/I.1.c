#include <stdio.h>
#include <stdlib.h>
#define SWAP(T, A, B) {T AUX = A; A = B; B = AUX;}


int main()
{
    int integer1;
    int integer2;

    scanf("%d", &integer1);
    scanf("%d", &integer2);

    printf("integer1 = %d integer2 = %d\n", integer1, integer2);
    SWAP(int, integer1, integer2);
    printf("integer1 = %d integer2 = %d\n", integer1, integer2);

    float float1;
    float float2;

    scanf("%f", &float1);
    scanf("%f", &float2);

    printf("float1 = %f float2 = %f\n", float1, float2);
    SWAP(float, float1, float2);
    printf("float1 = %f float2 = %f\n", float1, float2);

    return 0;
}
