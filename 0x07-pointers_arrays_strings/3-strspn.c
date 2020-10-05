#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a char
 * @accept: pointer to a character
 *
 * Return: unsigned int, length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int k = 0;
	unsigned int res = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k] && (i == count + 1 || count == 0))
			{
				res++;
				count++;
			}
			k++;
		}
		k = 0;
		i++;
	}
	return (res);
}
