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
char *_strdup2(char *name, char *value)
{
        char *s;
        int i = 0;
	int j = 0;

        s = malloc(sizeof(char) * _strlen(name) + _strlen(value) + 2);
        while (name[i] != '\0')
        {
                s[i] = name[i];
                i++;
        }
	s[i] = '=';
	i++;
	while (value[j] != '\0')
	{
		s[i] = value[j];
		i++;
		j++;
	}
        s[i] = '\0';
        return (s);
}

int _setenv(const char *name, const char *value, int overwrite)
{
        extern char **environ;
        char *val = NULL;
	char **tab;
	char *var = NULL;
	int i = 0;
	int nbr = 0;
	int size = 0;
	char *new = 0;
	int passed = 0;

	while (environ[i])
	{
		size++;
		i++;
	}
	printf("size : %d\n", size);
	i = 0;
	printf("____________________________\n");
	while (environ[i] != NULL)
	{
		var = strtok(environ[i], "=\n");
		printf("%s\n", environ[i]);
		printf("var : %s\n", var);
		if ((strcmp(var, name) == 0))
		{
			val = strtok(NULL, "=\n");
			printf("value: %s\n", val);
			/*	if (overwrite != 0)
			{
				res = value;
		       	}
			*/
			passed = 1;
			break;
		}
		i++;
	}
	printf("i at the end : %d\n", i);
	printf("passed : %d\n", passed);
	if (i == size && passed == 0 && overwrite != 0)
	{
		environ[size + 1] = _strdup2(name, value);
		environ[size + 2] = NULL;
	}
	return (0);
}
int main (void)
{
        char *s;
	char *t;

	_setenv("PATH","jjdlqs",0);
	_setenv("COUCOU","hello",0);
	_setenv("COUCOU","hello",1);
	_setenv("COUCOU","hello",0);
	/*  s = _getenv("USER");
        printf("%s\n", s);
        t = _getenv("HOME");
        printf("%s\n", t);
        s = _getenv("PATH");
         printf("%s\n", s);
*/        return (0);
}
