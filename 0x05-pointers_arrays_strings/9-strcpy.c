#include "main.h"

/**
 * _strcpy - Copies string src to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';

	return (dest);
}
