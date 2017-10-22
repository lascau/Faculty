#include <stdio.h>
#include <stdlib.h>

int mod(int a, int b){
    return a % b;
}

int gcd(int M, int N){
    if (mod(M, N) == 0)
        return N;
    else
        return gcd(N, mod(M, N));
}
int main()
{

    return 0;
}
