#include "main.h"

/**
 * get_location -  get location of env
 * @command: input command
 *
 * Return: char list.
 */

char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffer;

	path = getenv_custom("PATH");
	if (path)
	{
		path_copy = strdup_custom(path);
		command_length = strlen_custom(command);
		path_token = strtok(path_copy, ":");
		while (path_token != NULL)
		{
			directory_length = strlen_custom(path_token);
			file_path = malloc(command_length + directory_length + 2);
			strcpy_custom(file_path, path_token);
			strcat_custom(file_path, "/");
			strcat_custom(file_path, command);
			strcat_custom(file_path, "\0");

			if (stat(file_path, &buffer) == 0)
			{
				free(path_copy);
				return (file_path);
			}
			else
			{
				free(file_path);
				path_token = strtok(NULL, ":");
			}
		}

		free(path_copy);
		if (stat(command, &buffer) == 0)
		{
			return (command);
		}
		return (NULL);
	}
	return (NULL);
}
