#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements from an array a
 * @a: int type pointer
 * @n: int type
 *
 * Return: None
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (n--; n >= 0; n--, x++)
	{
		printf("%d", a[x]);

		if (n > 0)
		{
			printf(", ");
		}
	}

	printf("\n");
}
