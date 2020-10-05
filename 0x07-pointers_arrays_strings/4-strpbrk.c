#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to a char
 * @accept: pointer to a char
 *
 * Return: pointer to the first occurences of character c
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int k = 0;
	char *res;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				res = &s[i];
				return (res);
			}
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
