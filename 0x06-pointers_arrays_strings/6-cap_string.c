#include "holberton.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @s: pointer to a char
 *
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';

	while (s[i] != '\0')
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == ' ' || s[i] == '?'
		    || s[i] == '!' || s[i] == '"' || s[i] == '\n' || s[i] == '\t'
		    || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ' '; /* - 32 */
			}
		}
		i++;
	}
	return (s);
}
