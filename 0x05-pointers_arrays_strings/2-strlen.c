#include "main.h"

/**
 * _strlen - Function returns the length of a string.
 *  @str: string
 *  Return: Length of the string
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;
	return (len);
}
