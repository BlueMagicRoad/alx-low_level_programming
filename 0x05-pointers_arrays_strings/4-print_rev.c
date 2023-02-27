#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line to stdout
 * @s: char type pointer
 *
 * Return: None
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		;
	}

	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
