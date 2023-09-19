#include "main.h"

/**
 * printEnvironment -  print enviroment
 *
 * Return: NULL.
 */

void printEnvironment(void)
{
	extern char **environ;
	char **env = environ;

	while (*env != NULL)
	{
		write(1, *env, strlen_custom(*env));
		write(1, "\n", 1);
		env++;
	}
}
