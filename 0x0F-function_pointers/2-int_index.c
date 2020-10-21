#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 *
 * @array: pointer to an int
 * @size: int
 * @cmp: pointer to a function which return an int
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int res = 0;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			res = cmp(array[i]);
			if (res == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
