#include "holberton.h"

/**
 * times_table - prints 9 times table
 *
 * Description: starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int m;
	int n;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			m = (i * j);
			n = (m % 10) + '0';
			k = (m / 10) + '0';
			if (k != 48)
			{
				_putchar(k);
			}
			else if (k == 48 && j != 0)
			{
				_putchar(' ');
			}
			_putchar(n);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
