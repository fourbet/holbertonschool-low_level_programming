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
 * str_concat - concatenates two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = 0;
	int len2 = 0;

	printf("s1 :%d\n", _strlen(s1));
	printf("s2 :%d\n", _strlen(s2));
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
	{
		len1 = 0;
		s = malloc(sizeof(char) * (_strlen(s2) + 1));
		while (s2[i] != '\0')
		{
			s[i] = s2[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	else if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
		s = malloc(sizeof(char) * (len1 + len2 + 1));
		if (s == NULL)
			return (NULL);
		
		for (i = 0; i < len1; i++)
			*(s + i) = *(s1 + i);
		printf("i :%d\n", i);
		for (j = i; j < i + len2; j++)
		{
			*(s + j) = *(s2 + k);
			k++;
		}
		*(s + j) = '\0';
		return (s);
	}
	return (NULL);
}
