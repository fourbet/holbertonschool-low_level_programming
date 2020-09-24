#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: Character c
 * Return: 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
