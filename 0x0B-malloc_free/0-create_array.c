#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: int
 * @c: char
 *
 * Return: pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char* s;
	unsigned int i;
 
	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char)*size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		*(s + i) = c;
	return (s);
}
