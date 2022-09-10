#include <stdio.h>
/**
 * main-Entry point
 * It prints lowercase letters z to a
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar (ch);
	putchar('\n');
	return (0);
}
