#include<stdio.h>

/**
 * main - Starting point of the program
 * Description: Print the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
