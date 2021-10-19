#include <stdio.h>
#include <stdlib.h>
int makecoins(int money);

/**
 * main - returns minimum coins needed to make change
 * @argc: number of params
 * @argv: params we get
 * Return: 1 if error, 0 if success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int coins = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = makecoins(money);
	printf("%d\n", coins);
	return (0);
}
/**
 * makecoins - make coins from an integer
 * @money: the money we get
 * Return: coins from the money
 */

int makecoins(int money)
{
	int coins = 0;

	while (money >= 25)
	{
		coins++;
		money -= 25;
	}
	while (money >= 10)
	{
		coins++;
		money -= 10;
	}
	while (money >= 5)
	{
		coins++;
		money -= 5;
	}
	while (money >= 2)
	{
		coins++;
		money -= 2;
	}
	while (money >= 1)
	{
		coins++;
		money -= 1;
	}
	return (coins);
}
