#include "main.h"

/**
 * rev_string - Reverses a string s
 * @s: char type pointer
 *
 * Return: None
 */

void rev_string(char *s)
{
	int x, y, z;
	char a;

	for (x = 0; s[x] != '\0'; x++)
	{
		;
	}

	z = x;

	for (x--, y = 0; y < z / 2; x--, y++)
	{
		a = s[y];
		s[y] = s[x];
		s[x] = a;
	}
}
