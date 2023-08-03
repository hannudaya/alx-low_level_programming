#include "main.h"
/**
 * power_operation - returns the natural square root of a number
 * @n: number
 * @c: iterator
 * Return: returns the square root of -1
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a numbers
 * @n: input number
 * Return: returns the natural squares root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	return (power_operation(n, 2));
}
