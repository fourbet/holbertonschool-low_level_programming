#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: pointer to a char
 * @f: function to pointers which returns an void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
