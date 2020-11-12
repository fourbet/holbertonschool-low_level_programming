#include <stdio.h>
#include <stdlib.h>



int main (int argv, char **argc)
{
char cwd[1024];
getcwd(cwd, sizeof(cwd));
puts("Path info by use getcwd():");
printf("\tWorkdir: %s\n", cwd);
printf("\tFilepath: %s/%s\n", cwd, __FILE__);

return 0;
}
