#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to a char
 * @size: int
 *
 * Return: void, display sum
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	
	sum1 += a[0];
       	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i % (size - 1) == 0 && i != (size * size) - 1)
			sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
