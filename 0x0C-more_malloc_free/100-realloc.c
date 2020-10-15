#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates memory for an array, using malloc
 *
 * @old_size: unsigned int
 * @new_size: unsigned int
 * @ptr: pointer
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r;

	if (ptr == NULL)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		return (r);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	r = malloc(new_size);
	free (ptr);
	if (r == NULL)
		return (NULL);
	return (r);

}
