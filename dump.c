#include "main.h"

/**
 * strdup_custom -  string dump
 * @str: string
 *
 * Return: char list.
 */

char *strdup_custom(const char *str)
{
	size_t len = strlen_custom(str) + 1;
	char *copy = (char *) malloc(len * sizeof(char));

	if (copy != NULL)
	{
		strncpy_custom(copy, str, len);
	}
	return (copy);
}

/**
 * strncpy_custom -  string copy
 * @destination: string destination
 * @source: string original
 * @num: length
 *
 * Return: char list.
 */

char *strncpy_custom(char *destination, const char *source, size_t num)
{
	size_t i;

	for (i = 0; i < num && source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	}
	for (; i < num; i++)
	{
		destination[i] = '\0';
	}
	return (destination);
}

/**
 * strlen_custom -  string dump
 * @str: string
 *
 * Return: int.
 */

size_t strlen_custom(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
