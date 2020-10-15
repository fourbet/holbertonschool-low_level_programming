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
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(size * nmemb);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
		i[j] = 0;
	return (i);

}
