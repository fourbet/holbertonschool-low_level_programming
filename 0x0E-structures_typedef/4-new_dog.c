#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - length of a string
 *
 * @str: pointer to a char
 *
 * Return: int
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * new_dog - creates a new dog
 *
 * @name: pointer to a char
 * @age: float
 * @owner: pointer to a char
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *s;
	char *o;
	int i = 0;
	int j = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	s = malloc(sizeof(char) * _strlen(name) + 1);
	if (s == NULL)
	{
		free(s);
		free(d);
		return (NULL);
	}
	o = malloc(sizeof(char) * _strlen(owner) + 1);
	if (o == NULL)
	{
		free(o);
		free(d);
		return (NULL);
	}
	d->age = age;
	while (name[i] != '\0')
	{
		s[i] = name[i];
		i++;
	}
	s[i] = '\0';
	d->name = s;
	while (owner[j] != '\0')
	{
		o[j] = owner[j];
		j++;
	}
	o[j] = '\0';
	d->owner = 0;
	return (d);
}
