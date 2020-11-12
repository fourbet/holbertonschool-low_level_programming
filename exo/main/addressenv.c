#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
extern char** environ;

printf("adress env : %p\n", env);
printf("adress environ : %p\n", environ); 
return (0);
}
