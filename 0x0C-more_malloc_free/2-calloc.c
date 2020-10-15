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
	unsigned int j, sizet;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sizet = size * nmemb;
	r = malloc(sizet);
	if (r == NULL)
		return (NULL);
	for (j = 0; j < sizet; j++)
		((char *)r)[j] = 0;
	return (r);

}
