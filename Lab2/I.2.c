#include <stdio.h>
#include <stdlib.h>

struct Time{
    int hours;
    int mins;
    int secs;
};

struct Time Start, End, Distance;
int main()
{
    printf("Start:\n");
    scanf("%d%d%d", &Start.hours, &Start.mins, &Start.secs);
    printf("End:\n");
    scanf("%d%d%d", &End.hours, &End.mins, &End.secs);

    Distance.hours = End.hours - Start.hours;
    Distance.mins = End.mins - Start.mins;
    Distance.secs = End.secs - Start.secs;

    printf("%d %d %d", Distance.hours, Distance.mins, Distance.secs);

    return 0;
}
