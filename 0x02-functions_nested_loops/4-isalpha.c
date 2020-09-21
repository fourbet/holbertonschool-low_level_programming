#include "holberton.h"

/**
 * _isalpha -check if letter is lowercase or uppercase
 * @c: Character c
 * Return: 1 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
