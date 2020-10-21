#include "function_pointers.h"

/**
 * array_iterator - executes functio on each element of an array
 *
 * @array: pointer to an int
 * @size: size_t
 * @action: pointer to a function which return an int
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		while (size--)
			action(*array++);
	}
}
