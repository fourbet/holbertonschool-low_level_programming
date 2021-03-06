#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: pointer to a char
 * @needle: pointer to a char
 *
 * Return: pointer to the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int k = 0;
	int count = 0;
	int lenNeedle = 0;
	int index = 0;
	int index2 = 0;
	int ok = 0;

	if (needle[0] == '\0')
		return (&haystack[0]);
	while (haystack[i] != '\0')
	{
		while (needle[k] != '\0')
		{
			if (haystack[i] == needle[0] && ok == 0)
			{
				index = i;
				index2 = k;
				ok = 1;
			}
			else if (haystack[i] == needle[k] && (i == index + 1 && k == index2 + 1))
			{
				count++;
				index = i;
				index2 = k;
			}
			k++;
		}
		ok = 0;
		lenNeedle = k;
		k = 0;
		i++;
	}
	if (count + 1 == lenNeedle)
	{
		return (&haystack[index - lenNeedle + 1]);
	}
	else
		return (0);
}
