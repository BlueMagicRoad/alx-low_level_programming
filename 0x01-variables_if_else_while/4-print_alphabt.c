#include<stdio.h>

/**
 * main - Starting point of the program
 * Description: Print the alphabet in lowercase, but omit the letters e and q
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha = alpha;
		}
		else
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
