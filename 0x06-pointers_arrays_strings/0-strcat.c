#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
