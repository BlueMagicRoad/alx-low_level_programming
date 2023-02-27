#include "main.h"

/**
 * _atoi - Converts string s into an integer
 * @s: char type string
 *
 * Return: Converted string
 */

int _atoi(char *s)
{
	int x;
	int y = -1;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
		{
			y = y * -1;
		}

		if (s[x] > 47 && s[x] < 58)
		{
			if (z < 0)
			{
				z = (z * 10) - (s[x] - '0');
			}
			else
			{
				z = -1 * (s[x] - '0');
			}

			if (s[x + 1] < 48 || s[x + 1] > 57)
			{
				break;
			}
		}
	}
	if (y < 0)
	{
		z = z * -1;
	}

	return (z);
}
