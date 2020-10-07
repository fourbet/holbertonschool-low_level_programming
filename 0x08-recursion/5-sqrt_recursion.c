#include "holberton.h"
#include <stdio.h>
/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int k = n;

	if (k == 1)
		return (1);
	if (k <= 0)
		return (-1);
	if (k * 2 == n)
		return (k);
	else
		return (_sqrt_recursion(k - 1));
		       
}
