#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
char *_strtok(char *str, const char *delim)
{
	int i = 0;
	char *res;

	while (str[i] !='\0')
	{
		while (delim[j] != '\0')
			
			if (str[i] == delim[j])
			{
				return (res);
			}
		res[i] = str[i];
		i++;
		j++;
	}
	return (NULL);

}
