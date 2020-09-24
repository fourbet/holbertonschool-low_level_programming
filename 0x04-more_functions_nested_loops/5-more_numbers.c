#include "holberton.h"

/**
 * more_numbers - multiples two interger
 *
 * Return: result (Success)
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			i++;
		}
		i = 0;
		j++;
		_putchar('\n');
	}
}
