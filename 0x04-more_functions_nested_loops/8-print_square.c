#include "holberton.h"

/**
 * print_square - multiples two interger
 * @size: Int
 * Return: result (Success)
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (j < size)
		{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		j++;
		}
	}
	j = 0;
}
