#include "main.h"
/**
 * print_sign - prints the sign of a number n
 * @n: int type
 *
 * Return: 1 if positive, 0 if zero, -1 if negative, 2 otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (2);
}
