#include "holberton.h"
#include <stdio.h>
/**
 * read_textfile - read a text file and prints it to the stdout
 *
 * @filename: pointer to a char
 * @letters: number of letters it should read and print
 *
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read;
	char *buf;
	ssize_t bytes = 0, bytes2 = 0;

	if (filename == NULL)
		return (0);

	fd_read = open(filename, O_RDONLY);

	if (fd_read == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	bytes = read(fd_read, buf, letters);
	bytes2 = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
		return (0);
	if (bytes2 == -1)
		return (0);
	close(fd_read);
	return (bytes2);
}
