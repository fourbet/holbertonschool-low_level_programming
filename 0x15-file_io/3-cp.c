#include "holberton.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file
 *
 * @ac: number of arguments
 * @av: pointer to an array of char
 *
 *Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int fd_write;
	int fd_read;
	ssize_t bytesR = 0, ssize_t bytesW = 0;
	char buf[1024];
	int fd_close;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_read = open(av[1], O_RDONLY);
	if (fd_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_write = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_write == -1)
		fd_write = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (fd_write == -1)
	       dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((bytesR = read(fd_read, buf, 1024)) > 0)
		bytesW = write(fd_write, buf, bytesR);
	if (bytesR == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (bytesW == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	fd_close = close(fd_read);
	if (fd_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read), exit(100);
	fd_close = close(fd_write);
	if (fd_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write), exit(100);
	return (0);
}
