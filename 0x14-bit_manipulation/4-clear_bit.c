#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 (Sucess), -1 (Fails)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
