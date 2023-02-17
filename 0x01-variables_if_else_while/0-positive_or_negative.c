#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point of the program
 * Description: Determine whether a randomly
 * generated number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
