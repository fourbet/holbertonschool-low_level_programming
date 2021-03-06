#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;
        return (i);
}

char *_getenv(const char *name)
{
        extern char **environ;
        char *env = NULL;
	char **tab;
	char *res = NULL;
	int i = 0;
	int nbr = 0;

	printf("____________________________\n");
	while (environ[i] != NULL)
	{
		res = strtok(environ[i], "=\n");
		printf("%s\n", environ[i]);
		printf("res : %s\n", res);
		if ((strcmp(res, name) == 0))
		{
			res = strtok(NULL, "=\n");
			printf("res (env): %s\n", res);
			env = res;
			break;
		}
		i++;
	}
        return (env);
}
int main (void)
{
        char *s;
	char *t;

        s = _getenv("USER");
        printf("%s\n", s);
        t = _getenv("HOME");
        printf("%s\n", t);
        s = _getenv("PATH");
        printf("%s\n", s);
        return (0);
}
