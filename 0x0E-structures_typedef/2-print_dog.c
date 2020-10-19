#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a variable of type struct dog
 *
 * @d: pointer to a struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
