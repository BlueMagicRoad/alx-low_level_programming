#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point of the program
 *
 * Description: Function determines whether the random number n is positive, negative or zero
 *
 * Return: 0 if successful, non-zero if error(s)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
    {
        printf("%d\n is zero", n);
    }
    else if (n > 0)
    {
        printf("%d\n is positive", n);
    }
    else if (n < 0)
    {
        printf("%d\n is negative", n);
    }
	return (0);
}
