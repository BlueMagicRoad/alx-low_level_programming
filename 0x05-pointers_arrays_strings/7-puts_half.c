#include "main.h"

/**
 * puts_half - Prints the second half of string str
 * @str: char type pointer
 *
 * Return: None
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}

	x++

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
