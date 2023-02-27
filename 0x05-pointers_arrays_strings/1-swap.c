#include "main.h"

/**
 * swap_int - Swaps the values of a and b
 * @a: int type pointer
 * @b: int type pointer
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
