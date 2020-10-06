#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to a char
 * @c: character
 *
 * Return: pointer to the first occurences of character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *res = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (res);
}
