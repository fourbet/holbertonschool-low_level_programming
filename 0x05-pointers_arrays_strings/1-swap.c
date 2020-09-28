#include "holberton.h"
/**
 * swap_int - swaps the values of two intergers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
