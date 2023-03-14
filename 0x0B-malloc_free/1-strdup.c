#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to memory containing copy of string
 * @str: String to copy
 *
 * Return: Pointer to copied string
 */

char *_strdup(char *str)
{
	int n, m;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}

	a = malloc(n * sizeof(*a) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < n; m++)
	{
		a[m] = str[m];
	}

	a[m] = '\0';

	return (a);
}
