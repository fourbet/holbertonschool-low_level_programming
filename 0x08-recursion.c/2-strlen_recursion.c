#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to a char
 * Return: int, length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[count] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(&s[count + 1]));
}
