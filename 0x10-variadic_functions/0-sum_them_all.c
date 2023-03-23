#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned int sum = 0;

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);

	va_end(vl);

	return (sum);
}
