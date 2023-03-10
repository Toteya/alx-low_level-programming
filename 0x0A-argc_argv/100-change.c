#include "main.h"

/**
 * get_coins - Returns mininum number of coins required for change
 * @change: The amount in cents required in coins
 * @coins: Array of the different possible values of coins, in ascending order
 *
 * Return: (int) Number of coins required.
 */
int get_coins(int change, int *coins)
{
	int i = 0;
	int num = 0;	/* number of coins */

	while (change > 0)
	{
		if (coins[i] <= change)
		{
			num += change / coins[i];
			change = change % coins[i];
		}
		i++;
	}
	return (num);
}


/**
 * main - Prints the minimum number of coins required to produce (cents)
 * @argc: Number of arguments to the program
 * @argv: Array of command line argument to main
 *
 * Return: 0 if successful. Otherwise rerturn 1.
 */
int main(int argc, char *argv[])
{
	int change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	printf("%d\n", get_coins(change, coins));
	return (0);
}
