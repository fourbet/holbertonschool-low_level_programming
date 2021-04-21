#include "search_algos.h"
#include <math.h>
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

	if (!array || size <= 0)
		return (-1);
	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b = b + (int)sqrt(size);
		if (b >= size)
			break;
	}
	b = min_nbr(b, size - 1);
	printf("Value found between indexes [%d] and [%lu]\n", a, b);
	while (array[a] <= (int)b)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
		if (a == (int)size)
			return (-1);
	}
	return (-1);
}
