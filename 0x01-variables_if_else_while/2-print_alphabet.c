#include<stdio.h>

/**
 * main - Starting point of the program
 * Description: Print the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for(alpha = 'a' ; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	return (0);
}
