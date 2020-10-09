#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: int, number of arguments
 * @argv: array of pointer to these arguments
 *
 * Return: int, 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
