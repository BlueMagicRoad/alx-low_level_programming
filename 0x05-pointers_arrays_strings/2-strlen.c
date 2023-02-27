#include "main.h"

/**
 * _strlen - Prints the length of string s
 * @s: char type pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	return (x);
}
