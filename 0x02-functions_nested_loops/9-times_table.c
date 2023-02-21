#include "main.h"
/**
 * times_table - Prints the nie times table
 *
 * Return: NA
 */
void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			n = i * j;
			if (j == 9)
			{
				if (n > 9)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(n + '0');
				}
			}
			else if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
