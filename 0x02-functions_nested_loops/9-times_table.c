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
	int i = 48;
	int j = 48;
	

	for ( i = 0 ; i < 10 ; i++)
	{
		for ( j = 0 ; j < 10 ; j++)
		{
			if ( i == 0)
				_putchar(48);
			if ( i == 1)
				_putchar(j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
