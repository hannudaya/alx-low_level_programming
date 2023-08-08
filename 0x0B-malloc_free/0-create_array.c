#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: the size of the array
 * @c: the character to be initialized with
 * Return: Null of size is 0, or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(typeof(size));

	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}
