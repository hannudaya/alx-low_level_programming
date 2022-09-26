#include "main.h"
/**
 * char *_memset - fill a block of memory with a particular value.
 * @s: the starting point of the fill
 * @b: The character to fill
 * @n: The number of times the character is filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

