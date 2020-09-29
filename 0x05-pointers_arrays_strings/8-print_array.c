#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elemenrs of an array of intergers
 * @a: pointer to an int
 * @n: int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
