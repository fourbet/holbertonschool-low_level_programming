#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 *
 * Return: int, the length
 */

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
