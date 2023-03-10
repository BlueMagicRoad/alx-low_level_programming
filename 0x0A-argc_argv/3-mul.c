#include <stdiolib.h>
#include <stdio.h>

/**
 * main - Prints the product of two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int i = a * b;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", i);

	return (0);
}
