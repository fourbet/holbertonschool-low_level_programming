#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a char
 * @c: character
 *
 * Return: pointer to the first occurences of character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *res;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res = &s[i];
			return (res);
			break;
		}
		i++;

	}
	return (0);
}
