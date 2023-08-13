#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the string
 * Return: a pointer, or Null
 */
void *malloc_checked(unsigned int b)
{
	void *nb;

	nb = malloc(b);
	if (nb == NULL)
		exit(98);
	return (nb);
}
