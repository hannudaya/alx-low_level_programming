#include "main.h"
/**
 *_strlen - count array to find the lenght of the string
 *@s: string array of elements
 *Return: 1
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}


/**
 *_strdup - array to duplicate a string
 *@str: array of elements
 *Return: pointer
 */

char *_strdup(char *str)
{
	char *new;

	int i;

	i = 0;
	if (str == 0)
		return (NULL);
	new = (char *)malloc(sizeof(char) * _strlen(str) + 1);
	if (!new)
		return (NULL);
	while (*str)
		new[i++] = *str++;
	new[i] = '\0';
	return (new);
}

