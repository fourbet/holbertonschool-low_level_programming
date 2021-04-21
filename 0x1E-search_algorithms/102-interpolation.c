#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interportation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, on failure -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low++;
		else if (array[pos] > value)
			high++;
	}
	return (-1);
}
