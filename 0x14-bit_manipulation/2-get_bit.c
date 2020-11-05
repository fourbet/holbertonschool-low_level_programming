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
 * get_bit - returns the values of a bit at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res;
	unsigned int i = 0;

	while (_pow_recursion(2, i) <= n)
		i++;
	i--;

	if ((index > i) || (n == 0 && index != 0))
		return (-1);

	res = n >> index;

	if (res & 1)
		return (1);
	else
		return (0);
}
