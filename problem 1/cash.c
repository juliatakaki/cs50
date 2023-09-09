#include <stdio.h>

int main(void)
{
    int value = 0;
    
    do
    {
        printf("Value: ");
        scanf("%d", &value);
    } while (value < 0);
    
    while (value > 0)
    {
        int coins = 0; // 'coins' won't store previous values

        // verify if the 25 coin will be used
        while (value >= 25)
        {
            value = value - 25;
            coins++;
        }

        // verify if the 10 coin will be used
        while (value >= 10)
        {
            value = value - 10;
            coins++;
        }

        // verify if the 5 coin will be used
        while (value >= 5)
        {
            value = value - 5;
            coins++;
        }

        // verify if the 1 coin will be used
        while (value >= 1)
        {
            value = value - 1;
            coins++;
        }

        printf("Coins: %d\n", coins);
    }
    return 0;
}

/*
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    // Inicializado como 0 para ir aumentando de 1 em 1
    int coins = 0;

    // Conta a quantidade de moedas de 25 cents necessárias
    while (change >= 25)
    {
        change = change - 25;
        coins++;
        // Conta a quantidade de moedas de 10 cents necessárias
    }
    while (change >= 10)
    {
        change = change - 10;
        coins++;
        // Conta a quantidade de moedas de 5 cents necessárias
    }
    while (change >= 5)
    {
        change = change - 5;
        coins++;
        // Conta a quantidade de moedas de 1 cents necessárias
    }
    while (change >= 1)
    {
        change = change - 1;
        coins++;
    }
    printf("%d\n", coins);
}
*/