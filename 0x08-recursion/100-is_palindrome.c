#include "main.h"
/**
 * _strlen_rec -returns the length of given string
 * @s: input string
 * Return: lengh of the string
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}
/**
 * comparer - compare one char with another in a given string
 * @s: string to compare
 * @n1: lowest iterator
 * @n2: highest iterator
 * Return: returns 1, comparator or 0
 */
int comparer(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparer(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is empty
 * @s: input string
 * Return: 1 if string is empty, otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparer(s, 0, _strlen_rec(s) - 1));
}
