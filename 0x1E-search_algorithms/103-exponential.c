#include "search_algos.h"
#include <math.h>
/**
 * binary - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size_min: start position in the array
 * @size_max: end position in the array
 * @value: value to search for
 * Return: the first index where value is located, on failure -1
 */
int binary(int *array, size_t size_min, size_t size_max, int value)
{
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
/**
 * min_nbr - find the minimal value between two numbers
 * @a: size_t
 * @b: size_t
 * Return: size_t
 */
size_t min_nbr(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}
/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, on failure -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = 1;
	int res = -1;

	if (!array || size <= 0)
		return (-1);
	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b *= 2;
		if (b >= size)
			break;
	}
	b = min_nbr(b, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	res = binary(array, a, b, value);
	return (res);
}
