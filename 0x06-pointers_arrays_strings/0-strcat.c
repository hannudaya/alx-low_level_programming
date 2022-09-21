#include "main.h"

/**
 * _strtcat - concatenates two stings and store in the first string
 * dest: the destination string
 * @src: the source string
 * Return: The destination string
 */
char *_strtcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
