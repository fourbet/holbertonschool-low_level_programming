#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - return length of string
 *
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * create_file - creates a file
 *
 * @filename: pointer to a char
 * @text_content: pointer to a char
 *
 *Return: 1 (Success), -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd_write;
	ssize_t bytes = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fd_write = open(filename, O_CREAT);
	fd_write = open(filename, O_TRUNC | O_WRONLY);
	if (fd_write == -1)
		fd_write = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd_write == -1)
		return (0);
	bytes = write(fd_write, text_content, _strlen(text_content));
	if (bytes == -1)
		return (0);
	close(fd_write);
	return (1);
}
