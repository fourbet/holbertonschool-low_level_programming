#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: int
 * @max: int
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *i;
	int j = 0;
	int k = 0;

	if (min > max)
		return (NULL);
	i = malloc(sizeof(int) * (max - min + 1));
	if (i == NULL)
		return (NULL);
	for (j = min; j <= max; j++)
	{
		i[k] = j;
		k++;
	}
	return (i);

}
