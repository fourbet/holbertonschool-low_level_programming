#include "holberton.h"
/**
 * _rev_recursion - prints a string in reverse
 *
 * @s: pointer to a char
 * @start: int
 * @end: int
 * Return: void
 */
int _rev_recursion(char *s, int start, int end)
{
	if (start > end)
		return (0);
	if (*(s + start) != *(s + end))
		return (0);
	if (end < start)
		return (_rev_recursion(s, start + 1, end - 1));
	else
		return (1);
}
/**
 * _strlen - returns length string
 *
 * @s: pointer to a character
 * @i: int
 * Return: int
 */
int _strlen(char *s, int i)
{
	if (s[i] == '\0')
		return (0);
	else
		return (1 + _strlen(s, i + 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: pointer to a character
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (s != '\0')
		return (_rev_recursion(s, 0, _strlen(s, 0) - 1));
	else
		return (1);

}

