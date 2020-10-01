#include "holberton.h"
/**
 * _strcmp - compares two stringds
 * @s1: pointer to a char
 * @s2: pointer to a char
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int count = 0;
	unsigned char a = '0';
	unsigned char b = '0';

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		a = s1[i];
		b = s2[i];
		if (a < b)
			count--;
		else if (a > b)
			count++;
		i++;
	}
	return (count);
}
