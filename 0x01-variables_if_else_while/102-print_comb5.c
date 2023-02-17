#include<stdio.h>

/**
 * main - Starting point of the program
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
