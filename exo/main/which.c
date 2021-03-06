#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;
	char cwd[1024];
	char *cmp;

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
 		printf("%s:\n", av[i]);
		getcwd(cwd, sizeof(cwd));
	        printf("Workdir : %s\n", cwd);
		cmp = strcat(cwd, av[i]);
		printf("cmp : %s\n", cmp);
		if (stat(cmp, &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
