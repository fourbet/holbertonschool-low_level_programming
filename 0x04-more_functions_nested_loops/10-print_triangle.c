#include "holberton.h"

/**
 * print_triangle - multiples two interger
 * @size: Int
 * Return: result (Success)
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			while (j != (size - 1 - i))
			{
			_putchar(' ');
			j++;
			}
			while (k != i + 1)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			j = 0;
			k = 0;
		}
	}
}
