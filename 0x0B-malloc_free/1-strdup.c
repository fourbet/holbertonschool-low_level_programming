#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - length of string
 *
 *@str: pointer to a string
 *
 * Return: int, length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - allocated newly space in memory which contains copy of str
 *
 * @str: pointer to a string
 *
 * Return: pointer to a char
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str) ; i++)
		*(s + i) = *(str + i);
	*(s + i) = '\0';
	return (s);
}
