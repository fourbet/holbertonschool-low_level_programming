#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees a dog
 *
 * @d: pointer to a dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
