#include "main.h"

/**
 * strchr_custom -  convert to char list
 * @str: string
 * @character: length of character
 *
 * Return: char list.
 */

char *strchr_custom(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == character)
		{
			return ((char *) str);
		}
		str++;
	}
	if (character == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
