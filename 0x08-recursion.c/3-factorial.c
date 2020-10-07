#include "holberton.h"
#include <stdio.h>
/**
 * factorial - factorial of a given number
 *
 * @n: int
 * Return: int, length
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
