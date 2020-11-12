#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;
        return (i);
}

char *_strdup(char *str)
{
        char *s;
        int i = 0;

        s = malloc(sizeof(char) * _strlen(str) + 1);
        while (str[i] != '\0')
        {
                s[i] = str[i];
                i++;
        }
	s[i] = '\0';
	return (s);
}
void free_array(char **tab)
{
        int i = 0;
        for(i = 0; tab[i]; i++)
        {
                free(tab[i]);
        }
        free(tab);
}
/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	char **argv;
	pid_t child_pid;
	pid_t my_pid;
	char *buffer;
	char *res;
	size_t bufsize = 1024;
	int status;
	int k = 0;
	int count = 0;
	char *separators =" \n";
	while (1)
	{
		argv = malloc(sizeof(char *) * bufsize);
		buffer = malloc(sizeof(char) * bufsize);

		printf("#cisfun$ ");
		getline(&buffer, &bufsize, stdin);
		printf("buffer : %s\n", buffer);
		
		count = 1;

		res = strtok(buffer, separators);
		argv[k] = _strdup(res);
		printf(" argv[%d]: %s\n", k, argv[k]);
		k++;

		while (k <= count - 1)
		{
			res = strtok(NULL, separators );
			argv[k] = _strdup(res);
			k++;
		}
		argv[k] = NULL;
		printf(" argv[%d]: %s\n", k, argv[k]);

		child_pid = fork();
		my_pid = getpid();
		printf("childpid is %u\n", child_pid);
		printf("mypid is %u\n", my_pid); 
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			printf("Before execve\n");
			printf (" argv[0] : %s \n", argv[0]);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			printf("After execve\n");
			sleep(3);
		}
		else
		{
			
			wait(&status);
			printf("(%u) %u, I am your father\n", my_pid, child_pid);
			printf("Oh, it's all better now\n");
		}
		free_array(argv);
		k = 0;
	}
	return (0);
}
