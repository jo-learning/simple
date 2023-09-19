#include "main.h"

/**
 * execmd -  get enviroment
 * @argv: argument varable
 *
 * Return: NULL.
 */

void execmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{
		command = argv[0];

		if (strcmp_custom(command, "exit") == 0)
		{
			exit(0);
		}
		else if (strcmp_custom(command, "env") == 0)
		{
			printEnvironment();
			exit(0);
		}
		else
		{
		actual_command = get_location(command);

		if (execve(actual_command, argv, NULL) == -1)
		{
			perror("Error: command not founded");
			exit(0);
		}
		}
	}

}
