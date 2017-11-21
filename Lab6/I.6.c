#include <stdio.h>
#include <stdlib.h>

void split_time(long int total_sec, int *hr, int *min, int *sec){
    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    *sec = total_sec - *min*60;
    printf("%dhr(s)%dmin(s)%dsec(s)", *hr, *min, *sec);
}
int main()
{
    long int total_sec;
    int hr;
    int min;
    int sec;

    scanf("%ld", &total_sec);
    split_time(total_sec, &hr, &min, &sec);

    return 0;
}
