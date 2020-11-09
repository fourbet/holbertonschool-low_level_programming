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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to a char
 * @text_content: pointer to a char
 *
 *Return: 1 (Success), -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_write;
	ssize_t bytes = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd_write = open(filename, O_WRONLY);
		if (fd_write == -1)
			return (-1);
		else
			return (1);
	}
	fd_write = open(filename, O_WRONLY | O_APPEND);
	if (fd_write == -1)
		return (-1);
	bytes = write(fd_write, text_content, _strlen(text_content));
	if (bytes == -1)
		return (-1);
	close(fd_write);
	return (1);
}
