#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Start of program
 *
 * Description: Generate random valid passwards for the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int a, b, pass;

	srand(time(NULL));

	for (a = 0, b = 2772; b > 122; a++)
	{
		pass = (rand() % 125) + 1;
		printf("%c", pass);
		b -= pass;
	}
	printf("%c", b);

	return (0);
}
