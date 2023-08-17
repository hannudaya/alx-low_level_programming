#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - functions that print numbers followed by a new line
 * is being passed in
 * @separator: string to separate numbers
 * @n: Number of integers passed in
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list_numbers;

	va_start(list_numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list_numbers, int);
		printf("%d", num);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(int_input);
	printf("\n");
}
