#include <stdio.h>
/**
 * main-Entry point
 * It prints all combination of single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar (ch);
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
