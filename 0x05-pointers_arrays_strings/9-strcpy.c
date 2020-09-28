#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: pointer to a char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	len = _strlen(src);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
