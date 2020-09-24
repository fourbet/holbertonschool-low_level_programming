#include "holberton.h"

/**
 * print_diagonal - multiples two interger
 * @n: Int
 * Return: result (Success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			while (j < i)
			{
			_putchar(' ');
			j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
		}
	}
}
