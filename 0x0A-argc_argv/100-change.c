#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed
 * on the program
 *
 * Return: 0 if program completes successfully,
 * 1 if an error occurs
 */

int main(int argc, char  *argv[])
{
	int cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if
		(cents < 0)
		{
			printf("0\n");
			return (0);
		}
	for
		(i = 0;
		 i < 5; i++)
		{
			num_coins += cents / coins[i];
			cents %= coins[i];
		}
	printf("%d\n", num_coins);
	return (0);
}
