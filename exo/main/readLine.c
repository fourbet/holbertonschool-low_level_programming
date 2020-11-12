#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *buffer;
	size_t bufsize = 1024;
	
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);
	return (0);
}
