#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - number pow
 * @x: number given
 * @y: power
 * Return: number
 */
unsigned long int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x,  y - 1));
	}
	return (1);
}

/**
 * print_binary - prints binary representation of a number
 *
 * @n: number
 *
 * Return: the converted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int res;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (_pow_recursion(2, i) <= n)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		res = n >> i;
		{
			if (res & 1)
				_putchar('1');
			else
				_putchar('0');
		}
		i--;
	}

}
