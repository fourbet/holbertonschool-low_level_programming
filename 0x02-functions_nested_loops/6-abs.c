#include "holberton.h"

/**
 * _abs - absolute value
 * @n: int
 * Return: absolute value
 */

int _abs(int n)
{
	int l;
	
	if (n < 0)
	{
		l = - n;
	}
	else if (n ==0)
		l = 0;
	else
		l = n;
	return (l);
}
