#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: int
 *
 * Description: starting with 0
 *
 * Return: void
 */

void print_to_98(int n)
{
	int k;
	int m;
	
	while (n <= 98)
	{
		k = (n % 10) + '0';
		m = (n /10) + '0';
		_putchar(m);
		_putchar(k);
		_putchar(',');
		_putchar(' ');
		n++;
      
	}
	while (n > 98)
	{
		k = (n % 10) + '0';
		m = (n / 10) + '0';
		_putchar(m);
		_putchar(k);
		_putchar(',');
		_putchar(' ');
		n--;
	}

	_putchar('\n');
}
