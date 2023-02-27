#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: char type pointer
 *
 * Return: None
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
