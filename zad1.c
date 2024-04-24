#include <stdio.h>
#include <string.h>

void zad1()
{
    int numOfGuests;
    scanf("%d", &numOfGuests);

    char tmp[10];
    scanf("%s", &tmp);

    int numOfTables = 0, numOfChairs = 0,
        numOfCups = 0, numOfDishes = 0;

    float moneyPaid = 0;

    while(strcmp(tmp, "PARTY") != 0)
    {
        if(strcmp(tmp, "Table") == 0)
        {
            numOfTables += 8;
            moneyPaid += 42;
        }
        else if(strcmp(tmp, "Chair") == 0)
        {
            numOfChairs ++;
            moneyPaid += 13.99;
        }
        else if(strcmp(tmp, "Cups") == 0)
        {
            numOfCups += 6;
            moneyPaid += 5.98;
        }
        else if(strcmp(tmp, "Dishes") == 0)
        {
            numOfDishes += 6;
            moneyPaid += 21.02;
        }
        else
        {
            printf("Invalid info\n");
        }

        scanf("%s", &tmp);
    }

    printf("Money paid: %.2f\n", moneyPaid);

    if(numOfTables - numOfGuests < 0)
    {
        printf("Need %d more table/s\n", numOfGuests / numOfTables);
    }

    if(numOfChairs - numOfGuests < 0)
    {
        printf("Need %d more chair/s\n", numOfGuests - numOfChairs);
    }

    if(numOfCups - numOfGuests < 0)
    {
        printf("Need %d more cup/s\n", numOfGuests / numOfCups);
    }

    if(numOfDishes - numOfGuests < 0)
    {
        printf("Need %d more dish/s\n", numOfGuests / numOfDishes);
    }
}
