#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, on failure -1
 */

int jump_search(int *array, size_t size, int value)
{
	int a = 0;
	size_t b = 0;

	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b = b + (int)sqrt(size);
		if (b >= size)
			break;
	}
	printf("Value found between indexes [%d] and [%lu]\n", a, b);
	while (array[a] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a++;
		if (a >= (int)size)
			return (-1);
	}
	if (array[a - 1] == value)
		return (a - 1);
	return (-1);
}
