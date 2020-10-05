#include "holberton.h"

/**
 * _memset - copies memory area
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: first n bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);
}
