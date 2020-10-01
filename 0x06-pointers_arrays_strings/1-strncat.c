#include "holberton.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	if (n == j)
		dest[i + j] = '\0';
	return (dest);
}
