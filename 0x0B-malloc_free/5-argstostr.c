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
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: int
 * @av: pointer to a pointer to a char
 *
 * Return: pointer to a char
 */
char *argstostr(int ac, char **av)
{
	char *s = '\0';
	int len = 0;
	int stockAc = ac;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
	{
		len += _strlen(av[ac]);
	}
	s = malloc(sizeof(char) * (len + stockAc));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < stockAc; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			*(s + k) = av[i][j];
			k++;
		}
		*(s + k) = '\n';
		k++;
	}

	return (s);
}
