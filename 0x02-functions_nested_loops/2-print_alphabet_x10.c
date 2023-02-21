#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase ten times
 *
 * Return: 0
 * */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 0; n < 10; n++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
