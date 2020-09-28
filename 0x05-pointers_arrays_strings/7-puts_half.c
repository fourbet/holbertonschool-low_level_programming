#include "holberton.h"

/**
 * puts_half - prints half
 * @str: pointer to a char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int half;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
		half = (len - 1) / 2;

	while (str[i] != '\0')
	{
		if (i >= half)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
