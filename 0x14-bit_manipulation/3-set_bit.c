#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 (Sucess), -1 (Fails)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
