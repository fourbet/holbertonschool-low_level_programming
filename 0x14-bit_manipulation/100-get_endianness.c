#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	int res = 0;

	res = ((char *)&x)[0];
	if (res == 1)
		return (1);
	else
		return (0);
}
