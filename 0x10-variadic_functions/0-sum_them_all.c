#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sums all the argument passed
 * @n: number of arguements passed
 * Return: sum of int arguements
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(my_list, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(my_list, const unsigned int);
	}
	va_end(my_list);
	return (sum);
}
