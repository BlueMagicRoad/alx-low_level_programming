#include<stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Starting point of the program, prints text to standard error
 *
 * Return: 1
 */
int main(void)
{
	int howLong = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", howLong);
	return (1);
}
