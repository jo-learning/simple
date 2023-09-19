#include "main.h"

/**
 * getenv_custom -  get enviroment
 * @name: input env
 *
 * Return: char list.
 */

char *getenv_custom(const char *name)
{
	size_t i;

	for (i = 0; environ[i] != NULL; i++)
	{
		char *variable = environ[i];
		char *equalSign = strchr_custom(variable, '=');

		if (equalSign != NULL)
		{
			*equalSign = '\0';
			if (strcmp_custom(variable, name) == 0)
			{
				return (equalSign + 1);
			}
			*equalSign = '=';
		}
	}

	return (NULL);
}
