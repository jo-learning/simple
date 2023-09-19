#include "main.h"

/**
 * strcat_custom -  string concatinate
 * @destination: string destination
 * @source: string original
 *
 * Return: char list.
 */


char *strcat_custom(char *destination, const char *source)
{
	char *ptr = destination;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*source != '\0')
	{
		*ptr = *source;
		ptr++;
		source++;
	}

	*ptr = '\0';
	return (destination);
}
