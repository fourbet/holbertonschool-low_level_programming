#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d.name = name;
	d.age = age;
	d.owner = owner;
	return (d);
}
