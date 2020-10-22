#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @ac: int, nbr parameters
 * @av: pointer to an array of char
 *
 * Return: int
 */
int main(int ac, char *av[])
{
	int number = 0;
	int num1 = 0;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num1 = atoi(*(av + 1));
	if (num1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
