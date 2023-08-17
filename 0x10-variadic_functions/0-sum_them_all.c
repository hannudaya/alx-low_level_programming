#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all the argument passed
 * @n: number of arguements passed
 * Return: sum of int arguements
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	if (n == 0)
		return (0);
	var_list list_of_args;

	var_start(list_of_args, n);
	for (i = 0; i < n; i++)
		sum += var_arg(list_of_args, const unsigned int);
	var_end(list_of_args);
	/*_putchar('\n');*/
	return (sum);
}
