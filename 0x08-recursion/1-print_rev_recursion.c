#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer to a char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);
}
