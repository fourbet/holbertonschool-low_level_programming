#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an int
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
