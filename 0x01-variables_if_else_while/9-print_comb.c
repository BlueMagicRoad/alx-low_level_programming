#include<stdio.h>

/**
 * main - Starting point of the program
 *
 * Description: Print all single digits in base 10, separated by ', '
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{

		putchar(n);
		if (n < 57)
		{
			putchar(44); /*comma*/
			putchar(32); /*space*/
		}
	}
	putchar('\n');

	return (0);
}
