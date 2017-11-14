#include <stdio.h>
#include <stdlib.h>

int main()
{

    //base 2 to 8
    int n;
    int i = 0;
    int base8[50]={0};
    int idx = 0;
    int k;

    scanf("%d", &n);;

    while (n > 0){
        base8[idx] += (n%10) * (1 << i);
        if (i == 2) idx++;
        i = (i + 1) % 3;
        n /= 10;
    }

    for (i = idx ; i >= 0; i--)
       if (base8[i])
        printf("%d", base8[i]);


    //base 2 to 16
    int n;
    int i = 0;
    int base16[50]={0};
    int idx = 0;
    int k;
    char pos[17];
    pos[10] = 'A';
    pos[11] = 'B';
    pos[12] = 'C';
    pos[13] = 'D';
    pos[14] = 'E';
    pos[15] = 'F';

    scanf("%d", &n);;

    while (n > 0){
        base16[idx] += (n%10) * (1 << i);
        if (i == 3) idx++;
        i = (i + 1) % 4;
        n /= 10;
    }

    for (i = idx ; i >= 0; i--){
       if (base16[i] && base16[i] <= 9)
            printf("%d", base16[i]);
       else if (base16[i] && base16[i] > 9)
        printf("%c", pos[base16[i]]);
    }

    return 0;
}
