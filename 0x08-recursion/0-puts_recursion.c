#include "holberton.h"
#include <stdio.h>
/**
 * _recursion - prints a string, followed by a new line.
 *
 * @s: pointer to a char
 * Return: void
 */
void _recursion(char *s)
{
        int i = 0;

        if (s[i] == '\0')
                return;                                                                                                         _putchar(s[i]);
        _puts_recursion(&s[i + 1]);
}
                                                                                                                        
/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: pointer to a char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
		_recursion(s);
	else
		_putchar('\n');
}
