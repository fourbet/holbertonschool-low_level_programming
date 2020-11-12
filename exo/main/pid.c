#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t parent;

	my_pid = getpid();
	printf("process ID ; %u\n", my_pid);
	parent = getppid();
	printf("parent process ID ; %u\n", parent);
	return (0);
}
