#include <stdio.h>
#include <ctype.h>
/**
 * main-Entry point
 * It prints lowercase letters a to z
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (toupper(ch));
	}
	putchar('\n');
	return (0);
}
