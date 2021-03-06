#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	pid_t my_pid;
	int status;
	int i = 0;
	
	for(i = 0; i < 5 ; i++)
	{
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
	}
	return (0);
}
