#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create an array of chars & initialize it with a specific char
 * @size: size of array
 * @c: char that initializes the array
 *
 * Return: NULL if size = 0, pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(*a));

	if (a == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		a[n] = c;
	}

	return (a);
}
