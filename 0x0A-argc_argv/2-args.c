#include "holberton.h"
#include <stdio.h>
/**
 * main - program which prints all arguments its receives
 *
 * @argc: int, number of arguments
 * @argv: array of pointer to these arguments
 *
 * Return: int, 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
