#include "main.h"
/**
 * _islower - Check if character c is lowercase
 * @c: char type
 *
 * Return: 1 if lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
