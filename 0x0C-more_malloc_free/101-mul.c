#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: product as int
 */

int main(int argc, char *argv[])
{
	unsigned long product;
	int n, m;

	if (argc != 3)
	{
		printf("Error\n");

		exit(98);
	}

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] > 57 || argv[n][m] < 48)
			{
				printf("Error\n");

				exit(98);
			}
		}
	}

	product = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", product);

	return (0);
}
