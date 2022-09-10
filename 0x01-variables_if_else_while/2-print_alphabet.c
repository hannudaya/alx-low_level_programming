#include <stdio.h>
/**
 * main-Entry point
 * It prints lowercase letters a to z
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	putchar('\n');
	return (0);
}
