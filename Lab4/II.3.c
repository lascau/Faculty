#include <stdio.h>
#include <stdlib.h>

int TemperaturesOfJanuary[4][7] = {
    //week: 1
        4, 5, 11, 8, 3, 12, 14,

    //week: 2
        9, 5, 0, -2, 3, -1, 5,

    //week: 3
        6, 9, 15, 7, 9, 10, 5,

    //week: 4
        1, 0, -1, -3, -4, 0, 1,

    //week: 5
        -1, -2, 4
};

int HighestTemperature;
int LowestTemperature;
int AvgTemperature;
int day;

void MinMaxTemperature(int A[4][7]){

    HighestTemperature = TemperaturesOfJanuary[0][0];
    LowestTemperature = TemperaturesOfJanuary[0][0];

    for (day = 0; day <= 30; day++){

        if (A[day / 7][day % 7] > HighestTemperature)
            HighestTemperature = A[day / 7][day % 7];

        if (A[day / 7][day % 7] < LowestTemperature)
            LowestTemperature = A[day / 7][day % 7];

    }

    printf("%d %d\n", LowestTemperature, HighestTemperature);

}

void AverageTemperature(int A[])
{
    for (day = 0; day <= 30; day++)
        AvgTemperature += A[day];

    printf("%d", AvgTemperature / 31);
}

int main()
{

    MinMaxTemperature(TemperaturesOfJanuary);
    AverageTemperature(TemperaturesOfJanuary);

    return 0;
}
