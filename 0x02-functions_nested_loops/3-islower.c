#include "holberton.h"

/**
 * _islower - prints alphabet in lowercase
 * @c: Character c
 * Return: void (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
