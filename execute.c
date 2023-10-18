#include "shell.h"
/**
* execute_cus - simple shell main function
* @command: count of arguments
* @argv: Arguments
* Return: 0 Always (success)
*/

int execute_cus(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			freearray(command);
			exit(0);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearray(command);
	}
	return (WEXITSTATUS(status));
}
