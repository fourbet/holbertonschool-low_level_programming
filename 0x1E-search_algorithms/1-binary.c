#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, on failure -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t size_min = 0;
	size_t size_max = size - 1;
	size_t middle;
	size_t i;

	if (!array)
		return (-1);

	while (size_min <= size_max)
	{
		printf("Searching in array: ");
		for (i = size_min; i <= size_max; i++)
		{
			if (i != size_max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		middle = (size_min + size_max) / 2;
		if (array[middle] < value)
			size_min = middle + 1;
		else if (array[middle] > value)
			size_max = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
