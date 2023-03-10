#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the amount of coins needed to give change for a given amount
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int coins;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
		{
			coins -= 25;
		}
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;

		sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
