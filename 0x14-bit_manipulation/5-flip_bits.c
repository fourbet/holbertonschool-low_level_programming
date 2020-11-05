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
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 *@n : number
 *@m: number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int diff = 0;
	unsigned int count = 0;

	diff = n ^ m;
	while (_pow_recursion(2, i) <= diff)
		i++;
	while (i >= 0)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
		i--;
	}
	return (count);
}
