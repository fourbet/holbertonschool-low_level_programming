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
	int i = 0;
	int index2 = index;

	if (n == 0 && index == 0)
	{
		return (0);
	}

	while (_pow_recursion(2, i) <= n)
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		res = n >> i;
		if (index2 == i)
		{
			if (res & 1)
				return (1);
			else
				return (0);
		}
		i--;
	}
	return (-1);

}
