#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
		((char *)r)[j] = 0;
	return (r);

}
