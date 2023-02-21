#include "main.h"
/**
 * _abs(int n) - prints the absolute value of an integer
 * @n: int type
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
