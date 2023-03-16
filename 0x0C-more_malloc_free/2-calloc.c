#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: NULL on error, otherwise pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *p;
    unsigned int n;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    p = malloc(nmemb * size);

    if (p == NULL)
    {
        return (NULL);
    }

    for (n = 0; n < nmemb * size; n++)
    {
        p[n] = 0;
    }

    return (p);
}
