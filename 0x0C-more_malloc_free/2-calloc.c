#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(size * nmemb);
	if (i == NULL)
		return (NULL);
	return (i);

}
