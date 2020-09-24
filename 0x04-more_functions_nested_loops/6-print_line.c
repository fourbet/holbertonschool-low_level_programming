#include "holberton.h"

/**
 * print_line - multiples two interger
 * @n: Int
 * Return: result (Success)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
