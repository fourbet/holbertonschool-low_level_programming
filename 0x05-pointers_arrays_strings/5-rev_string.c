#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: pointer to a char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char tmp = '0';
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--; /* length s */
	j = 0;
	while (j <= i)
	{
		tmp = s[j];
		s[j] = s[i];
		*(s + i) = tmp;
		j++;
		i--;
	}
}
