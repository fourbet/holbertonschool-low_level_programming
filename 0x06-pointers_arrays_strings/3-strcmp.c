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

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			count--;
		else if (s1[i] > s2[i])
			count++;
		i++;
	}
	return (count);
}
