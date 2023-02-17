#include<stdio.h>

/**
 * main - Starting point of the program
 *
 * Description: Print the alphabet in lowercase, and in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
