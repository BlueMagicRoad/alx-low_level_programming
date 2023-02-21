#include "main.h"
/**
 * _isalpha - Check if character c is a letter
 * @c: char type
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
