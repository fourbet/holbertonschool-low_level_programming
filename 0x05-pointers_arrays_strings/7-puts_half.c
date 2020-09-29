#include "holberton.h"
#include <stdio.h>
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
	int half = 0;
	int half1 = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		len++;
		j++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{	half1 = (len - 1) / 2;
		half = len - half1;
	}
	while (str[i] != '\0')
	{
		if (i >= half)
		{	_putchar(str[i]);
		}
	i++;
	}

	_putchar('\n');
}
