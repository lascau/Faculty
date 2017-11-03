#include <stdio.h>
#include <stdlib.h>

int main()
{
    //c)
        srand(time(NULL));

        int dice3 = rand() % 12;

        printf("Cerinta c): %d\n", dice3);
    //d)
        srand(time(NULL));
    //v1

        int set[31] = {0};
        int dice4;

        set[12] = set[15] = set[18] = set[21] = set[24] = set[27] = set[30] = 1;

        do{

            dice4 = rand() % 30;

        }while (!set[dice4]);

        printf("Cerinta d): %d", dice4);

    //v2
      /*
        int dice4;
        do
        {

            dice4 = rand() % 30;

        }while (!(dice4 >= 12 && dice4 % 3 == 0));

        printf("Cerinta d): %d", dice4);
    */
    return 0;
}
