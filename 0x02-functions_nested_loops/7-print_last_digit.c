#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer n
 * @n: int type
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -1 * n;
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
}
