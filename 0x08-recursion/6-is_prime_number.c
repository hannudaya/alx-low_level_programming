#include "main.h"

/**
 * is_num_prime - check if the number is a prime
 * @n: input number
 * @c: iterator
 *Return: return 1 if it's prime number, otherwise return 0
 */
int is_num_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_num_prime(n, c + 1));
}
/**
 * is_prime_number - checks if the number is a prime number
 * @n: input number from user
 * Return: return 1 if it's prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_num_prime(n, 2));
}

