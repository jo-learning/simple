#include "main.h"

/**
 * strcpy_custom -  string copy
 * @destination: string destination
 * @source: string original
 *
 * Return: char list.
 */

char *strcpy_custom(char *destination, const char *source)
{
	char *ptr = destination;

	while (*source != '\0')
	{
		*ptr = *source;
		ptr++;
		source++;
	}
	*ptr = '\0';

	return (destination);
}
