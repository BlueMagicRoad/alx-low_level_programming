#include<stdio.h>

/**
 * main - Starting point of the program
 *
 * Description: Print all single digits in base 10
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}
