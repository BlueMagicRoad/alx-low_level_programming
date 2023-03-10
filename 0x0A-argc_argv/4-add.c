#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the sum of two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int a, b;
	int i = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}

		i += atoi(argv[a]);
	}

	printf("%d\n", i);

	return (0);
}
