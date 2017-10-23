#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coins[] = {1, 5, 20, 50};
    int bills[] = {1, 5, 10, 20, 50, 100};
    int minimumNumberOfCoins = 0;
    int minimumNumberofBills = 0;
    int money_cents;
    int money_dollars;

    printf("Dollars = ");
    scanf("%d", &money_dollars);
    printf("Cents = ");
    scanf("%d", &money_cents);

    int b;
    for (b = 5;money_dollars > 0 && b >= 0; b--)
        if (bills[b] <= money_dollars){
            minimumNumberofBills += money_dollars / bills[b];
            money_dollars -= (money_dollars / bills[b]) * bills[b];
        }

    int c;
    for (c = 3;money_cents > 0 && c >= 0; c--)
        if (coins[c] <= money_cents){
            minimumNumberOfCoins += money_cents / coins[c];
            money_cents -= (money_cents / coins[c]) * coins[c];
        }

    printf("Minimum number of bills used: %d\n", minimumNumberofBills);
    printf("Minimum number of coins used: %d", minimumNumberOfCoins);

    return 0;
}
