#include<stdio.h>

/**
 * main - Starting point of the program
 *
 * Description: Print all numbers in base 16
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char alpha;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
